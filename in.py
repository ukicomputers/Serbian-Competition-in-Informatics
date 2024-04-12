import os
home_dir = os.path.expanduser("~")

first_line = input()
lines = []
for _ in range(int(first_line[0])):
    lines.append(input())

file_path = os.path.join(home_dir, "in_xxxx.txt")
with open(file_path, "a") as file:
    file.write(first_line + "\n")
    for line in lines:
        file.write(line + "\n")