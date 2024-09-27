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

### 1.4.4 语句与函数

![](./python%E7%AC%94%E8%AE%B0.assets/%E8%B5%8B%E5%80%BC%E8%AF%AD%E5%8F%A5.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%88%86%E6%94%AF%E8%AF%AD%E5%8F%A5.png)

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%87%BD%E6%95%B0.png)

### 1.4.5 Python 程序的输入输出

![](./python%E7%AC%94%E8%AE%B0.assets/input.png)

![](./python%E7%AC%94%E8%AE%B0.assets/print.png)

![](./python%E7%AC%94%E8%AE%B0.assets/eval.png)

### 1.4.6 “温度转换” 代码分析

![](./python%E7%AC%94%E8%AE%B0.assets/%E5%85%83%E7%B4%A0%E5%88%86%E6%9E%90.png)

# 二、Python 基本图形绘制

## 2.1

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

