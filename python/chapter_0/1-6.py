# PTA 习题 7-9
# 求整数均值
a, b, c, d = map(int,input().split())
sum_value = a + b + c + d
average_value = round(sum_value / 4, 1)
print("Sum = {}; Average = {}".format(sum_value,average_value))