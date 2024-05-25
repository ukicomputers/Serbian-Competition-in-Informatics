import os
home_dir = os.path.expanduser("~")

first_line = input()
string = ""
for _ in range(int(first_line) + 2):
    string += input() + " "

file_path = os.path.join(home_dir, "in_glasanje.txt")
with open(file_path, "a") as file:
    file.write(string + "\n")