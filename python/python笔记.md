# 一、Python 基本语法元素

## 1.1 程序设计基本方法

### 1.1.1 计算机与程序设计

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%9A%84%E6%A6%82%E5%BF%B5.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%91%A9%E5%B0%94%E5%AE%9A%E5%BE%8B.png)

### 1.1.2 编译和解释

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%89%A7%E8%A1%8C%E6%96%B9%E5%BC%8F.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E7%BC%96%E8%AF%91.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%A7%A3%E9%87%8A.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E7%BC%96%E8%AF%91%E5%92%8C%E8%A7%A3%E9%87%8A.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%AF%AD%E8%A8%80%E5%88%86%E7%B1%BB.png)

### 1.1.3 程序的基本编写方法

![](./python%E7%AC%94%E8%AE%B0.assets/IPO.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%AD%A5%E9%AA%A4.png)

### 1.1.4 计算机编程

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%BC%96%E7%A8%8B.png)

## 1.2 Python 开发环境配置

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%AF%9E%E7%94%9F.png)

![](./python%E7%AC%94%E8%AE%B0.assets/vscode.png)

## 1.3 实例1：温度转换

```python
# 实例一：温度转换
tempStr = input("请输入带有符号的温度值：")
if tempStr[-1] in ['f','F']:
    c = (eval(tempStr[0:-1]) - 32)/1.8
    print("转换后的温度是{:.2f}C".format(c))
elif tempStr[-1] in ['c','C']:
    f = 1.8 * eval(tempStr[0:-1]) + 32
    print("转换后的温度是{:.2f}F".format(f))
else:
    print("输入格式错误")
```

## 1.4 Python 程序语法元素分析

### 1.4.1 程序的格式框架

![](./python%E7%AC%94%E8%AE%B0.assets/%E7%BC%A9%E8%BF%9B.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%B3%A8%E9%87%8A.png)

### 1.4.2 命名与保留字

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%8F%98%E9%87%8F.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%91%BD%E5%90%8D.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E4%BF%9D%E7%95%99%E5%AD%97.png)

### 1.4.3 数据类型

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%9F%BA%E6%9C%AC%E7%B1%BB%E5%9E%8B.png)

#### 数字类型

![](./python%E7%AC%94%E8%AE%B0.assets/%E6%95%B0%E5%AD%97%E7%B1%BB%E5%9E%8B.png)

#### 字符串类型

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%AD%97%E7%AC%A6%E4%B8%B2.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%BA%8F%E5%8F%B7.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%AD%97%E7%AC%A6%E4%B8%B2%E4%BD%BF%E7%94%A8.png)

#### 列表类型

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%88%97%E8%A1%A8%E7%B1%BB%E5%9E%8B.png)

### 1.4.4 语句

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%B5%8B%E5%80%BC%E8%AF%AD%E5%8F%A5.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%88%86%E6%94%AF%E8%AF%AD%E5%8F%A5.png)

### 1.4.5 函数

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%87%BD%E6%95%B0.png)

#### （1）input 函数

![](./python%E7%AC%94%E8%AE%B0.assets/input.png)

#### （2）print 函数

![](./python%E7%AC%94%E8%AE%B0.assets/print.png)

#### （3）.format() 方法

```python
# 基本用法
"字符串 {0} 字符串 {1}".format(value1, value2)
# 格式化输出
print("The price is {0:.2f} dollars".format(123.4567))  
# 输出: The price is 123.46 dollars
print("Left aligned: {0:<10} | Right aligned: {0:>10}".format("Hello"))  
# 输出: Left aligned: Hello      | Right aligned:     Hello
```



#### （4）eval 函数

![](./python%E7%AC%94%E8%AE%B0.assets/eval.png)

#### （5）range 函数

```python
for i in range(5):
    print(i)  # 输出: 0 1 2 3 4
for i in range(2, 5):
    print(i)  # 输出: 2 3 4
for i in range(2, 10, 2):
    print(i)  # 输出: 2 4 6 8
for i in range(5, 0, -1):
    print(i)  # 输出: 5 4 3 2 1
numbers = list(range(5))
print(numbers)  # 输出: [0, 1, 2, 3, 4]    
```

#### （6）map 函数

```python
# map() 函数是Python中的一个内置函数，用于将一个函数应用于一个可迭代对象（如列表、元组等）的每个元素，并返回一个迭代器。这个迭代器生成应用函数后的结果。
map(function, iterable, ...)
function：一个函数，用于处理 iterable 中的每个元素。
iterable：一个或多个可迭代对象，其元素将被传递给 function。
# 读入四个数字
a, b, c, d = map(int, input().split())
# 与函数相结合
def square(x):
    return x * x

numbers = [1, 2, 3, 4]
squared_numbers = map(square, numbers)

for number in squared_numbers:
    print(number)  # 输出: 1 4 9 16
# map() 函数返回一个 map 对象，这是一个迭代器。这意味着你需要使用循环或其他迭代工具（如 list()）来访问结果。
numbers = [1, 2, 3, 4]
squared_numbers = list(map(lambda x: x * x, numbers))
print(squared_numbers)  # 输出: [1, 4, 9, 16]
```

#### （7）lambda 表达式

```python
# 在Python中，lambda 表达式是一种简洁的定义匿名函数的方法。匿名函数是指那些不需要明确定义函数名的函数。lambda 表达式通常用于需要函数对象的地方，但又不希望使用完整的函数定义。
lambda arguments: expression
arguments：参数列表，可以是一个或多个参数。
expression：表达式，必须是一个表达式，而不是一个语句。
# 定义一个 lambda 表达式，计算两个数的和
add = lambda x, y: x + y
# 使用 lambda 表达式
result = add(3, 4)
print(result)  # 输出: 7
```

#### （8）.split() 方法

```python
# 在Python中，.split() 方法是字符串（str）对象的一个方法，用于将字符串分割成多个子字符串，并返回一个列表。这个方法非常有用，尤其是在处理输入数据和文件读取时。
# 基本用法
str.split(separator=None, maxsplit=-1)
separator：分隔符，用于指定字符串应该在哪里被分割。如果未指定或为 None，则默认为任何空白字符（如空格、制表符、换行符等）。
maxsplit：一个整数，指定分割操作的最大次数。默认为 -1，意味着没有限制。
# 示例
text = "Hello, World!"
split_text = text.split()  # 默认分隔符是空白字符
print(split_text)  # 输出: ['Hello,', 'World!']
# 使用自定义分隔符
text = "one-two-three-four"
split_text = text.split('-')
print(split_text)  # 输出: ['one', 'two', 'three', 'four']
# 限制分割次数
text = "one-two-three-four"
split_text = text.split('-', maxsplit=2)
print(split_text)  # 输出: ['one', 'two', 'three-four']
# 处理连续分隔符
如果字符串中包含连续的分隔符，.split() 方法会返回空字符串。
text = "one---two--- three"
split_text = text.split('-')
print(split_text)  # 输出: ['one', '', '', 'two', '', 'three']
# 处理没有分隔符的情况
如果字符串中没有指定的分隔符，.split() 方法将返回包含原始字符串的列表。
text = "no-separators"
split_text = text.split('-')
print(split_text)  # 输出: ['no-separators']
# 注意事项
.split() 方法返回的是一个列表，每个元素都是原字符串中由分隔符分割的部分。
如果需要进一步处理结果，比如去除空白字符，可以使用列表推导式结合 str.strip() 方法。
在处理复杂的文本数据时，.split() 方法可以与正则表达式模块 re 结合使用，提供更灵活的文本分割功能。
.split() 方法是处理字符串分割的基本工具，非常适合用于解析和处理由特定字符分隔的数据。
```

#### （9）round 函数

```python
# 在Python中，round() 函数是一个内置函数，用于将一个浮点数四舍五入到指定的小数位数。
# 基本用法
round(number, ndigits=None)
number：要四舍五入的数字。
ndigits：要四舍五入到的小数位数。如果省略或为 None，则 number 将被四舍五入到最近的整数。
# 示例
num = 3.14159
print(round(num))    # 输出: 3
print(round(num, 2)) # 输出: 3.14
# 四舍五入到整数
如果 ndigits 参数被省略或为 None，则 round() 函数将数字四舍五入到最近的整数。
print(round(2.5))  # 输出: 2
print(round(3.5))  # 输出: 4
# 四舍五入到指定的小数位数
print(round(2.55555, 2))  # 输出: 2.56
print(round(2.34567, 3))  # 输出: 2.346
# 负数的小数位数
ndigits 参数也可以是负数，这种情况下，round() 函数会将数字四舍五入到十位、百位等。
print(round(1234.56, -2))  # 输出: 1200
print(round(123.456, -1))  # 输出: 120
# 注意事项
round() 函数在处理 .5 的情况时，遵循的是“四舍六入五取偶”的规则，即如果数字的小数部分正好是 .5，则会根据其后一位数字的奇偶性来决定是四舍还是五入。
当 ndigits 是负数时，round() 函数会从数字的左边开始数，直到达到指定的位数。
round() 函数是Python中常用的数值处理函数之一，非常适合用于需要精确控制数字精度的场合。
```

# 二、Python 基本图形绘制

## 2.1 深入理解 Python 语言

## 2.2 实例2：Python 蟒蛇绘制

```python
# 实例2：Python 蟒蛇绘制
import turtle
turtle.setup(650,350,200,200)
turtle.penup()
turtle.fd(-250)
turtle.pendown()
turtle.pensize(25)
turtle.pencolor("purple")
turtle.seth(-40)
for i in range(4):
    turtle.circle(40,80)
    turtle.circle(-40,80)
turtle.circle(40, 80/2)
turtle.fd(40)
turtle.circle(16,180)
turtle.fd(40 * 2/3)
turtle.done()
```

