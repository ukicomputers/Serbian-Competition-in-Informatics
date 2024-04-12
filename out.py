import os

home_dir = os.path.expanduser("~")
file_path = os.path.join(home_dir, "in_xxxx.txt")

with open(file_path, "r") as file:
    lines = file.readlines()
    content = ''.join(lines)
    print(content)