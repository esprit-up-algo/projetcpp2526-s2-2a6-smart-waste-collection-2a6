import sys

lines = open('build/Desktop_Qt_6_7_3_MinGW_64_bit-Debug/ui_mainwindow.h', 'r', encoding='utf-8').readlines()
for line in lines:
    if 'Cmd' in line or 'cmd' in line or 'Commande' in line or 'commande' in line:
        print(line.strip())
