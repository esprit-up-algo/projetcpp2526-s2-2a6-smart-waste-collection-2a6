import os
import json
import time
import subprocess
import urllib.request
import threading
from http.server import HTTPServer, BaseHTTPRequestHandler

LOCATION_DATA = {
    "current": None,
    "history": []
}

DATA_FILE = "C:/Users/Rudy/Desktop/Finale/delivery_tracking.json"
URL_FILE = "C:/Users/Rudy/Desktop/Finale/ngrok_url.txt"

def save_to_file():
    with open(DATA_FILE, "w") as f:
        json.dump(LOCATION_DATA, f)

class TrackingHandler(BaseHTTPRequestHandler):
    def _set_headers(self, status_code=200, content_type='application/json'):
        self.send_response(status_code)
        self.send_header('Content-type', content_type)
        self.send_header('Access-Control-Allow-Origin', '*')
        self.send_header('Access-Control-Allow-Methods', 'GET, POST, OPTIONS')
        self.send_header('Access-Control-Allow-Headers', 'Content-Type')
        self.end_headers()

    def do_OPTIONS(self):
        self._set_headers()

    def do_GET(self):
        if self.path == '/':
            self._set_headers(content_type='text/html')
            try:
                with open("C:/Users/Rudy/Desktop/Finale/tracking.html", "rb") as f:
                    self.wfile.write(f.read())
            except Exception as e:
                self.wfile.write(f"Error reading HTML: {e}".encode())
        elif self.path == '/get_location':
            self._set_headers()
            self.wfile.write(json.dumps(LOCATION_DATA).encode())
        else:
            self.send_response(404)
            self.end_headers()

    def do_POST(self):
        if self.path == '/update_location':
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            data = json.loads(post_data.decode('utf-8'))
            
            if "lat" in data and "lng" in data:
                loc = {"lat": data["lat"], "lng": data["lng"]}
                LOCATION_DATA["current"] = loc
                LOCATION_DATA["history"].append(loc)
                save_to_file()
                
                self._set_headers()
                self.wfile.write(json.dumps({"status": "success", "recorded": loc}).encode())
            else:
                self._set_headers(400)
                self.wfile.write(json.dumps({"status": "error"}).encode())

def start_ngrok():
    try:
        # Try both 'ngrok' and 'ngrok.exe'
        try:
            subprocess.Popen(["ngrok", "http", "5050"], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        except FileNotFoundError:
            try:
                subprocess.Popen(["ngrok.exe", "http", "5050"], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            except FileNotFoundError:
                with open(URL_FILE, "w") as f:
                    f.write("ERREUR : ngrok.exe est introuvable. Téléchargez-le !")
                return

        time.sleep(3) # Wait for ngrok to start
        
        # Fetch public URL
        req = urllib.request.Request("http://127.0.0.1:4040/api/tunnels")
        with urllib.request.urlopen(req) as response:
            data = json.loads(response.read().decode())
            public_url = data['tunnels'][0]['public_url']
            
            with open(URL_FILE, "w") as f:
                f.write(public_url)
            print(f"Ngrok URL saved to {URL_FILE}: {public_url}")
    except Exception as e:
        with open(URL_FILE, "w") as f:
            f.write(f"ERREUR ngrok : {str(e)}")
        print(f"Failed to start ngrok or get URL: {e}")

if __name__ == "__main__":
    print("Démarrage du serveur de tracking sur le port 5050...")
    threading.Thread(target=start_ngrok, daemon=True).start()
    
    server_address = ('0.0.0.0', 5050)
    httpd = HTTPServer(server_address, TrackingHandler)
    httpd.serve_forever()
