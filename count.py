# 统计代码行数
import os
import re

def count_lines(filename):
    count = 0
    with open(filename,'r',encoding='utf-8') as file:
        for line in file:
            count += 1
    return count

def is_code(filename):
    return re.search(r'\.c$|\.py$',filename) is not None

def find_all_dirs(path):
    for entry in os.listdir(path):
        full_path = os.path.join(path,entry)
        if os.path.isdir(full_path):
            find_all_dirs(full_path)
        elif is_code(entry):
            global total
            total += count_lines(full_path)

total = 0
path = '.'

print("In Calculating...")

find_all_dirs(path)

print("You have written a total of {} Lines of code!".format(total))