import re

file_path = "mainwindow.cpp"
with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# Fix installCmdActions2 missing stat capture
old_block_2 = """            QString startAddr = ui->tableProduits_2->item(currentRow, 0)->data(Qt::UserRole + 2).toString();
            QString pathHist  = ui->tableProduits_2->item(currentRow, 0)->data(Qt::UserRole + 3).toString();
            QString adr       = ui->tableProduits_2->item(currentRow, 4)->text();
            
            QWidget* page = new QWidget();"""

new_block_2 = """            QString startAddr = ui->tableProduits_2->item(currentRow, 0)->data(Qt::UserRole + 2).toString();
            QString pathHist  = ui->tableProduits_2->item(currentRow, 0)->data(Qt::UserRole + 3).toString();
            QString adr       = ui->tableProduits_2->item(currentRow, 4)->text();
            QString stat      = ui->tableProduits_2->item(currentRow, 3)->text().toLower();
            
            QWidget* page = new QWidget();"""

content = content.replace(old_block_2, new_block_2)

# Remove the duplicate stat declaration lower down in the lambda
content = content.replace('// START OF TRACKING INJECTION\n            QString stat = ui->tableProduits_2->item(currentRow, 3)->text().toLower();\n            if (stat.contains("cours")) {', '// START OF TRACKING INJECTION\n            if (stat.contains("cours")) {')

# Also fix the same thing for installCmdActions just in case, though it already had it, we don't want duplicates.
with open(file_path, "w", encoding="utf-8") as f:
    f.write(content)

print("Patch applied.")
