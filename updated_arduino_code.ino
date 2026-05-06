#include <Servo.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SS_PIN 10
#define RST_PIN A1
MFRC522 rfid(SS_PIN, RST_PIN);

#define OLED_W   128
#define OLED_H   32
#define OLED_ADDR 0x3C
Adafruit_SSD1306 oled(OLED_W, OLED_H, &Wire, -1);
bool oledReady = false;

Servo servo1, servo2;
const int led1 = 2, led2 = 3;
const int btn1 = 4, btn2 = 5, btn3 = 6, btn4 = A2;
const int pirPin = A0;

const int stepPin = 7;
const int dirPin = 8;

bool appBtn[4] = {false, false, false, false};
String serialBuffer = "";

int currentBin = 0;
unsigned long lastBinMoveTime = 0;
bool isAwayFromHome = false;

enum LabibState {
  L_OFF, L_WAKE, L_HELLO, L_BLINK, L_LOOK, L_SMILE, L_HEART, L_SLEEP, L_FADE,
  L_REPAIR_WAKE, L_REPAIR_FACE, L_REPAIR_IDLE
};
LabibState lState = L_OFF;
unsigned long lStart = 0;

void labibStart(LabibState s) { lState = s; lStart = millis(); }

bool repairArmed    = false;
bool repairActive   = false;
unsigned long repairArmedAt = 0;
const unsigned long REPAIR_ARM_TIMEOUT = 15000;
String repairTechName = "";


bool lastBtn3State = HIGH;
unsigned long lastBtn3Time = 0;
const unsigned long DEBOUNCE_MS = 250;


void drawEye(int cx, int cy, int openness, int pupilDx = 0) {
  if (!oledReady) return;
  if (openness <= 0) {
    oled.drawLine(cx - 7, cy, cx + 7, cy, SSD1306_WHITE);
    return;
  }
  oled.drawCircle(cx, cy, 7, SSD1306_WHITE);
  oled.fillCircle(cx + pupilDx, cy, 3, SSD1306_WHITE);
  if (openness < 8) {
    int lid = 7 - openness;
    oled.fillRect(cx - 8, cy - 8, 17, lid + 1, SSD1306_BLACK);
    oled.drawLine(cx - 7, cy - 7 + lid, cx + 7, cy - 7 + lid, SSD1306_WHITE);
  }
}

void drawHeartEye(int cx, int cy) {
  if (!oledReady) return;
  oled.fillCircle(cx - 3, cy - 1, 3, SSD1306_WHITE);
  oled.fillCircle(cx + 3, cy - 1, 3, SSD1306_WHITE);
  oled.fillTriangle(cx - 5, cy + 1, cx + 5, cy + 1, cx, cy + 6, SSD1306_WHITE);
}

void drawMouth(int cx, int cy, int style) {
  if (!oledReady) return;
  switch (style) {
    case 0: 
      oled.drawLine(cx - 5, cy, cx + 5, cy, SSD1306_WHITE);
      break;
    case 1: 
      oled.drawLine(cx - 6, cy - 1, cx - 3, cy + 2, SSD1306_WHITE);
      oled.drawLine(cx - 3, cy + 2, cx + 3, cy + 2, SSD1306_WHITE);
      oled.drawLine(cx + 3, cy + 2, cx + 6, cy - 1, SSD1306_WHITE);
      break;
    case 2: 
      oled.drawCircle(cx, cy + 1, 2, SSD1306_WHITE);
      break;
    case 3: 
      oled.drawLine(cx - 4, cy, cx + 4, cy, SSD1306_WHITE);
      oled.drawLine(cx - 4, cy, cx - 2, cy + 2, SSD1306_WHITE);
      oled.drawLine(cx + 4, cy, cx + 2, cy + 2, SSD1306_WHITE);
      break;
  }
}

void drawHand(int x, int y) {
  if (!oledReady) return;
  oled.drawCircle(x, y, 3, SSD1306_WHITE);
  oled.drawLine(x - 2, y - 3, x - 1, y - 5, SSD1306_WHITE);
  oled.drawLine(x,     y - 3, x,     y - 5, SSD1306_WHITE);
  oled.drawLine(x + 2, y - 3, x + 1, y - 5, SSD1306_WHITE);
}

void drawZzz(int x, int y, int phase) {
  if (!oledReady) return;
  oled.setTextSize(1);
  oled.setTextColor(SSD1306_WHITE);
  int off = (phase % 3) * 2;
  oled.setCursor(x,      y     - off); oled.print('z');
  oled.setCursor(x +  6, y - 6 - off); oled.print('Z');
  oled.setCursor(x + 12, y - 12 - off); oled.print('Z');
}

void drawWrench(int cx, int cy) {
  if (!oledReady) return;
  oled.drawLine(cx - 2, cy - 5, cx + 2, cy + 5, SSD1306_WHITE);
  oled.drawCircle(cx - 3, cy - 6, 2, SSD1306_WHITE);
  oled.drawRect(cx + 1, cy + 4, 4, 3, SSD1306_WHITE);
}


void labibTick() {
  if (lState == L_OFF || !oledReady) return;
  unsigned long now = millis();
  unsigned long e = now - lStart;

  oled.clearDisplay();
  const int LX = 38, RX = 90, EY = 14;

  switch (lState) {
    case L_WAKE: {
      int prog = (int)(e * 100UL / 600UL); if (prog > 100) prog = 100;
      int op = (prog * 8) / 100; if (op < 1) op = 1;
      drawEye(LX, EY, op);
      drawEye(RX, EY, op);
      if (prog > 60) drawMouth(64, 24, 1);
      if (e >= 600) labibStart(L_HELLO);
      break;
    }
    case L_HELLO: {
      drawEye(LX, EY, 8);
      drawEye(RX, EY, 8);
      drawMouth(64, 24, 1);
      int wob = ((e / 120) % 2) ? -3 : 3;
      drawHand(112 + wob, 14);
      if (e > 300 && e < 1400) {
        oled.setTextSize(1);
        oled.setTextColor(SSD1306_WHITE);
        oled.setCursor(2, 2);
        oled.print("BONJOUR!");
      }
      if (e >= 1700) labibStart(L_BLINK);
      break;
    }
    case L_BLINK: {
      int op;
      if (e < 200) op = 8 - (int)(e * 8 / 200);
      else         op = (int)((e - 200) * 8 / 200);
      if (op < 0) op = 0; if (op > 8) op = 8;
      drawEye(LX, EY, op);
      drawEye(RX, EY, op);
      drawMouth(64, 24, 1);
      if (e >= 400) labibStart(L_LOOK);
      break;
    }
    case L_LOOK: {
      int dx = (e < 333) ? -3 : (e < 666) ? 3 : 0;
      drawEye(LX, EY, 8, dx);
      drawEye(RX, EY, 8, dx);
      drawMouth(64, 24, 0);
      if (e >= 1000) labibStart(L_SMILE);
      break;
    }
    case L_SMILE: {
      drawEye(LX, EY, ((e / 200) % 2) ? 8 : 1); // wink
      drawEye(RX, EY, 8);
      drawMouth(64, 23, 1);
      if (e >= 900) labibStart(L_HEART);
      break;
    }
    case L_HEART: {
      drawHeartEye(LX, EY);
      drawHeartEye(RX, EY);
      drawMouth(64, 24, 1);
      int h = OLED_H - (int)((e % 1200) * OLED_H / 1200);
      oled.fillCircle(60, h, 1, SSD1306_WHITE);
      oled.fillCircle(72, h + 6, 1, SSD1306_WHITE);
      if (e >= 1200) labibStart(L_SLEEP);
      break;
    }
    case L_SLEEP: {
      drawEye(LX, EY, 0);
      drawEye(RX, EY, 0);
      drawMouth(64, 24, 0);
      drawZzz(74, 14, e / 250);
      if (e >= 1600) labibStart(L_FADE);
      break;
    }
    case L_FADE: {
      drawEye(LX, EY, 0);
      drawEye(RX, EY, 0);
      int n = (int)(e * OLED_W / 400UL);
      oled.fillRect(0, 0, n, OLED_H, SSD1306_BLACK);
      if (e >= 400) {
        lState = L_OFF;
        oled.clearDisplay();
        oled.display();
        return;
      }
      break;
    }

    case L_REPAIR_WAKE: {
      int prog = (int)(e * 100UL / 400UL); if (prog > 100) prog = 100;
      int op = (prog * 8) / 100; if (op < 1) op = 1;
      drawEye(LX, EY, op);
      drawEye(RX, EY, op);
      drawMouth(64, 24, 2); 
      if (e >= 500) labibStart(L_REPAIR_FACE);
      break;
    }
    case L_REPAIR_FACE: {
      drawEye(LX, EY, 8);
      drawEye(RX, EY, 8, (((e / 300) % 3) - 1) * 2); 
      drawMouth(64, 24, 3); 

      int wobble = ((e / 200) % 2) ? -2 : 2;
      drawWrench(10 + wobble, 16);

      oled.setTextSize(1);
      oled.setTextColor(SSD1306_WHITE);
      oled.setCursor(2, 0);
      oled.print("REPARATION");

      if (repairTechName.length() > 0) {
        oled.setCursor(30, 25);
        String displayName = repairTechName;
        if (displayName.length() > 12) displayName = displayName.substring(0, 12);
        oled.print(displayName);
      }

      if (e >= 2000) labibStart(L_REPAIR_IDLE);
      break;
    }
    case L_REPAIR_IDLE: {
      int cycle = (e / 3000) % 2;
      int subE = e % 3000;

      if (cycle == 0) {
        int dx = 0;
        if (subE > 1000 && subE < 1500) dx = -2;
        else if (subE > 1500 && subE < 2000) dx = 2;
        drawEye(LX, EY, 8, dx);
        drawEye(RX, EY, 8, dx);
        drawMouth(64, 24, 1);
      } else {
        int blinkPhase = subE % 400;
        int op;
        if (blinkPhase < 150) op = 8 - (blinkPhase * 8 / 150);
        else if (blinkPhase < 250) op = 0;
        else op = (blinkPhase - 250) * 8 / 150;
        if (op < 0) op = 0; if (op > 8) op = 8;
        drawEye(LX, EY, op);
        drawEye(RX, EY, op);
        drawMouth(64, 24, 1);
      }

      drawWrench(5, 8);

      oled.setTextSize(1);
      oled.setTextColor(SSD1306_WHITE);
      oled.setCursor(20, 25);
      String dn = repairTechName;
      if (dn.length() > 14) dn = dn.substring(0, 14);
      oled.print(dn);

      break;
    }

    default: break;
  }
  oled.display();
}


void repairOpenAnimation() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(60);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(60);
  }
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  for (int angle = 0; angle <= 90; angle += 3) {
    servo1.write(90 - angle);
    servo2.write(90 + angle);
    delay(15);
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(100);
  }
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void repairCloseAnimation() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  for (int angle = 90; angle >= 0; angle -= 3) {
    servo1.write(90 - angle);
    servo2.write(90 + angle);
    delay(15);
  }
  servo1.write(90);
  servo2.write(90);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void activateRepairMode() {
  repairArmed = false;
  repairActive = true;

  Serial.println("REPAIR_MODE:ACTIVE");

  labibStart(L_REPAIR_WAKE);

  for (int i = 0; i < 3; i++) {
    digitalWrite(led1, HIGH); delay(80);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH); delay(80);
    digitalWrite(led2, LOW);
  }

  repairOpenAnimation();
}

void deactivateRepairMode() {
  repairActive = false;
  repairArmed = false;
  repairTechName = "";

  repairCloseAnimation();

  lState = L_OFF;
  if (oledReady) {
    oled.clearDisplay();
    oled.display();
  }

  Serial.println("REPAIR_MODE:CLOSED");
}


void setup() {
  Serial.begin(9600);

  SPI.begin();
  rfid.PCD_Init();

  Wire.begin();
  if (oled.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    oledReady = true;
    oled.clearDisplay();
    oled.display();
    Serial.println("OLED:READY");
  } else {
    oledReady = false;
    Serial.println("OLED:NOT_FOUND");
  }

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);
  pinMode(pirPin, INPUT);

  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  servo1.attach(A3);
  servo2.attach(9);
  servo1.write(90);
  servo2.write(90);

  Serial.println("MOTION:0");
  Serial.println("=== SYSTEM ONLINE ===");
}


void loop() {

  if (rfid.PICC_IsNewCardPresent() && rfid.PICC_ReadCardSerial()) {
    Serial.print("RFID_TAG:");
    for (byte i = 0; i < rfid.uid.size; i++) {
      Serial.print(rfid.uid.uidByte[i] < 0x10 ? "0" : "");
      Serial.print(rfid.uid.uidByte[i], HEX);
    }
    Serial.println();

    digitalWrite(led1, HIGH); delay(100); digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH); delay(100); digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH); digitalWrite(led2, HIGH); delay(100);
    digitalWrite(led1, LOW);  digitalWrite(led2, LOW);

    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();
  }

  while (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      serialBuffer.trim();
      if (serialBuffer.startsWith("S:") && serialBuffer.length() >= 6) {
        appBtn[0] = (serialBuffer.charAt(2) == '1');
        appBtn[1] = (serialBuffer.charAt(3) == '1');
        appBtn[2] = (serialBuffer.charAt(4) == '1');
        appBtn[3] = (serialBuffer.charAt(5) == '1');
      }

      else if (serialBuffer.startsWith("R:TECHNICIEN:")) {
        repairTechName = serialBuffer.substring(13);
        repairArmed = true;
        repairArmedAt = millis();
        Serial.print("REPAIR_ARMED:");
        Serial.println(repairTechName);

        if (oledReady) {
          oled.clearDisplay();
          oled.setTextSize(1);
          oled.setTextColor(SSD1306_WHITE);
          oled.setCursor(0, 0);
          oled.print("Technicien:");
          oled.setCursor(0, 19);
          String dn = repairTechName;
          if (dn.length() > 21) dn = dn.substring(0, 21);
          oled.print(dn);
          oled.setCursor(0, 25);
          oled.print("-> Appuyez btn3");
          oled.display();
        }

        for (int i = 0; i < 2; i++) {
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          delay(150);
          digitalWrite(led1, LOW);
          digitalWrite(led2, LOW);
          delay(100);
        }
      }

      else if (serialBuffer == "R:CLOSE") {
        if (repairActive) {
          deactivateRepairMode();
        } else {
          repairArmed = false;
          repairTechName = "";
          if (oledReady) {
            oled.clearDisplay();
            oled.display();
          }
        }
      }
      
      // Parse distance data from second Arduino
      else if (serialBuffer.startsWith("D:")) {
        int distance = serialBuffer.substring(2).toInt();
        // Forward distance data to the Qt application
        Serial.print("DISTANCE:");
        Serial.println(distance);
      }

      // Parse AI material classification
      else if (serialBuffer.startsWith("AI:")) {
        String material = serialBuffer.substring(3);
        material.trim();
        int targetBin = currentBin;
        if (material == "CARDBOARD") targetBin = 0;
        else if (material == "METAL") targetBin = 1;
        else if (material == "GLASS") targetBin = 2;
        else if (material == "GENERAL_WASTE") targetBin = 3;

        if (targetBin != currentBin) {
          int diff = targetBin - currentBin;
          if (diff > 2) diff -= 4;
          else if (diff < -2) diff += 4;
          
          if (diff != 0) {
            digitalWrite(dirPin, diff > 0 ? HIGH : LOW);
            int steps = abs(diff) * 50; // 50 steps per 90 degrees
            for (int i = 0; i < steps; i++) {
              digitalWrite(stepPin, HIGH);
              delayMicroseconds(2000);
              digitalWrite(stepPin, LOW);
              delayMicroseconds(2000);
            }
            currentBin = targetBin;
            if (currentBin != 0) {
              lastBinMoveTime = millis();
              isAwayFromHome = true;
            } else {
              isAwayFromHome = false;
            }
          }
        }
      }

      serialBuffer = "";
    } else {
      serialBuffer += c;
    }
  }

  bool currentBtn3 = digitalRead(btn3);
  if (repairArmed && !repairActive) {
    if (millis() - repairArmedAt > REPAIR_ARM_TIMEOUT) {
      repairArmed = false;
      repairTechName = "";
      Serial.println("REPAIR_ARMED:TIMEOUT");
      if (oledReady) {
        oled.clearDisplay();
        oled.setTextSize(1);
        oled.setTextColor(SSD1306_WHITE);
        oled.setCursor(10, 12);
        oled.print("Delai expire");
        oled.display();
        delay(1500);
        oled.clearDisplay();
        oled.display();
      }
    }

    if (currentBtn3 == LOW && lastBtn3State == HIGH
        && (millis() - lastBtn3Time > DEBOUNCE_MS)) {
      lastBtn3Time = millis();
      activateRepairMode();
    }
  }
  lastBtn3State = currentBtn3;

  if (!repairActive && !repairArmed) {
    digitalWrite(led1, (digitalRead(btn1) == LOW || appBtn[0]) ? HIGH : LOW);
    
    bool btn2Pressed = (digitalRead(btn2) == LOW || appBtn[1]);
    digitalWrite(led2, btn2Pressed ? HIGH : LOW);

    if (btn2Pressed) {
      digitalWrite(dirPin, HIGH); // Set stepper direction
      // Pulse the stepper motor
      for (int i = 0; i < 20; i++) {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(2000); // Increased delay to allow the motor to keep up
        digitalWrite(stepPin, LOW);
        delayMicroseconds(2000); // Increased delay
      }
    }
  }

  

  static bool lastMotion = false;
  bool motion = (digitalRead(pirPin) == HIGH);
  if (motion != lastMotion) {
    lastMotion = motion;
    Serial.println(motion ? "MOTION:1" : "MOTION:0");
    if (motion && lState == L_OFF && !repairActive && !repairArmed) {
      labibStart(L_WAKE);
    }
  }
  if (motion && !repairActive) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }

  // Auto-home after 10 seconds of inactivity
  if (isAwayFromHome && (millis() - lastBinMoveTime >= 10000)) {
    int diff = 0 - currentBin; // target is 0
    if (diff > 2) diff -= 4;
    else if (diff < -2) diff += 4;
    
    if (diff != 0) {
      digitalWrite(dirPin, diff > 0 ? HIGH : LOW);
      int steps = abs(diff) * 50;
      for (int i = 0; i < steps; i++) {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(2000);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(2000);
      }
    }
    currentBin = 0;
    isAwayFromHome = false;
  }

  labibTick();

  delay(20);
}