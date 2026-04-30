import sys

file_path = "mainwindow.cpp"
with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# We want to add a method or just inject into the lambda.
# Let's inject into the lambda where mapWidget is created.

injection = """
            // START OF TRACKING INJECTION
            if (!stat.contains("livr") && !stat.contains("termin")) {
                // Start python server
                QProcess *pyProc = new QProcess(page);
                pyProc->start("python", QStringList() << "tracking_server.py");
                
                QLabel *lblUrl = new QLabel("Démarrage du tracking en cours...", page);
                lblUrl->setStyleSheet("color: #27ae60; font-weight: bold; font-size: 14px; margin-bottom: 10px;");
                lblUrl->setAlignment(Qt::AlignCenter);
                l->insertWidget(1, lblUrl);

                QTimer *urlTimer = new QTimer(page);
                urlTimer->start(2000);
                QObject::connect(urlTimer, &QTimer::timeout, [lblUrl, urlTimer]() {
                    QFile f("ngrok_url.txt");
                    if (f.open(QIODevice::ReadOnly)) {
                        QString url = f.readAll().trimmed();
                        if (!url.isEmpty()) {
                            lblUrl->setText(QString("Ouvrez ce lien sur votre téléphone : <a href='%1'>%1</a>").arg(url));
                            lblUrl->setOpenExternalLinks(true);
                            urlTimer->stop();
                        }
                        f.close();
                    }
                });

                QTimer *posTimer = new QTimer(page);
                posTimer->start(3000);
                QObject::connect(posTimer, &QTimer::timeout, [mapWidget]() {
                    QFile f("delivery_tracking.json");
                    if (f.open(QIODevice::ReadOnly)) {
                        QJsonDocument doc = QJsonDocument::fromJson(f.readAll());
                        QJsonObject obj = doc.object();
                        if (obj.contains("current") && !obj["current"].isNull()) {
                            QJsonObject cur = obj["current"].toObject();
                            double lat = cur["lat"].toDouble();
                            double lng = cur["lng"].toDouble();
                            if (mapWidget && mapWidget->rootObject()) {
                                QMetaObject::invokeMethod(mapWidget->rootObject(), "updatePhoneLocation",
                                    Q_ARG(QVariant, lat), Q_ARG(QVariant, lng));
                            }
                        }
                        f.close();
                    }
                });
            }
            // END OF TRACKING INJECTION
"""

# Find the first occurrence
target1 = """            if (mapWidget->rootObject()) {
                mapWidget->rootObject()->setProperty("isReadOnly", true);"""

if target1 in content:
    content = content.replace(target1, injection + target1, 1)

# Find the second occurrence (installCmdActions2)
target2 = """            if (mapWidget->rootObject()) {
                mapWidget->rootObject()->setProperty("isReadOnly", true);
                mapWidget->rootObject()->setProperty("showLocButton", false);"""
                
# Actually, the code in installCmdActions and installCmdActions2 has slightly different text
# Let's just find `if (mapWidget->rootObject()) {` after creating `double sLat = 0.0;`

# Let's do a regex replacement to be safer
import re

content = re.sub(r'(double sLat = 0\.0.*?if \(mapWidget->rootObject\(\)\) \{)', 
                 injection + r'\1', 
                 content, 
                 flags=re.DOTALL)

# Add #include <QProcess>, <QTimer>, <QJsonDocument>, <QJsonObject> at the top if not present
if "#include <QProcess>" not in content:
    content = content.replace('#include "mainwindow.h"', '#include "mainwindow.h"\n#include <QProcess>\n#include <QTimer>\n#include <QJsonDocument>\n#include <QJsonObject>\n')


with open(file_path, "w", encoding="utf-8") as f:
    f.write(content)

print("Patch applied successfully.")
