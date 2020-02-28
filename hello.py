import turtle

'''
turtle.pensize(4)
turtle.pencolor('red')


turtle.forward(100)
turtle.right(90)
turtle.forward(100)
turtle.right(90)
turtle.forward(100)
turtle.right(90)
turtle.forward(100)

turtle.mainloop()
'''

'''
a = 321
b = 123
print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a // b)
print(a % b)
print(a ** b)
'''

'''
a = 100
b = 12.345
c = 1 + 5j
d = 'hello, world'
e = True
print(type(a)) # <class 'int'>
print(type(b)) # <class 'float'>
print(type(c)) # <class 'complex'>
print(type(d)) # <class 'str'>
print(type(e)) # <class 'bool'>
'''

'''
a = int(input('a = '))
b = int(input('b = '))
print('%d + %d = %d' % (a, b, a + b))
print('%d - %d = %d' % (a, b, a - b))
print('%d * %d = %d' % (a, b, a * b))
print('%d / %d = %f' % (a, b, a / b))
print('%d // %d = %d' % (a, b, a // b))
print('%d %% %d = %d' % (a, b, a % b))
print('%d ** %d = %d' % (a, b, a ** b))
'''

'''
a = int(input('a='))
b = int(input('b='))
print(' %d + %d = %d' % (a,b,a+b))
'''
'''
a = 10
b = 3
a += b # 相当于：a = a + b
a *= a + 2 # 相当于：a = a * (a + 2)
print(a) # 想想这里会输出什么
'''

'''
flag0 = 1 == 1
flag1 = 3 > 2
flag2 = 2 < 1
flag3 = flag1 and flag2
flag4 = flag1 or flag2
flag5 = not (1 != 2)
print('flag0 =', flag0) # flag0 = True
print('flag1 =', flag1) # flag1 = True
print('flag2 =', flag2) # flag2 = False
print('flag3 =', flag3) # flag3 = False
print('flag4 =', flag4) # flag4 = True
print('flag5 =', flag5) # flag5 = False
print(flag1 is True) # True
print(flag2 is not False) # False
'''

'''
f = float(input('请输入华氏温度：'))
s = ( f - 32) / 1.8
print('华氏温度%.2f = 摄氏温度%.2f' % (f,s))
'''

'''
year = int(input('input year:'))
is_leap = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
print(is_leap)
'''

'''
username = input('input username:')
password = input('input password:')
if( username=='admin' and password == '12345'):
    print('验证通过')
else:
    print('验证失败')
'''
'''
sum = 0
for target_list in range(2,101,2):
    sum += target_list
print(sum)
'''
'''
import random
answer = random.randint(1,100)
couter = 0
while True:
    couter += 1
    number = int(input('请输入：'))
    if number < answer:
        print('猜小了')2
    elif number > answer:
        print('猜大了')
    else:
        print('恭喜你猜对了')
        break
print('你总共猜了%d次'% couter)
'''
'''
for i in range(1,10):
    for j in range(1,i+1):
        print('%d×%d=%d' % (i,j,i*j),end='\t')
    print()
'''

'''
# 判断一个数是不是素数
from math import sqrt
num = int(input('请输入：'))
end = int(sqrt(num))
is_prime = True
for i in range(2,end+1):
    if num % i == 0:
        is_prime = False
        break
if is_prime and num != 1:
    print('%d是素数！' % num)
else:
    print('%d不是素数！' % num)
'''

'''
x = int(input('x = '))
y = int(input('y = '))
if x > y:
    x,y = y,x
for factor in range(x,0,-1):
    if x % factor == 0 and y % factor == 0:
        print('%d和%d的最大公约数是%d' % (x,y,factor))
        print('%d和%d的最小公倍数是%d' % (x,y,x * y // factor))
        break
'''

row = int(input('请输入行数:'))
for i in range(row):
    for _ in range(i+1):
        print('*',end='')
    print()
print()
print()

row  = int(input('行数:'))
for i in range(row):
    for _ in range(row-i):
        print('',end='')
    print('*')

