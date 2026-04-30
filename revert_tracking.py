import re

file_path = "mainwindow.cpp"
with open(file_path, "r", encoding="utf-8") as f:
    content = f.read()

# Remove the tracking injection blocks
pattern = r"\s*// START OF TRACKING INJECTION.*?// END OF TRACKING INJECTION\n"
new_content = re.sub(pattern, "\n", content, flags=re.DOTALL)

with open(file_path, "w", encoding="utf-8") as f:
    f.write(new_content)

print("Reverted injections.")
