### 2020/2/12

1. 交互式环境

2. 变量是一种存储数据的载体

3. python中的变量类型： 整型（int）浮点型  字符串型   布尔型  复数型

4. 变量命名： 由字母、数字和下划线构成，数字不能开头

5. ```python
   a = int(input('a = '))
   b = int(input('b = '))
   print('%d + %d = %d' % (a, b, a + b))
   # %表示占位符
   ```

6. 使用turtle绘制图形

   ```python
   import turtle
   turtle.pensize(4)
   turtlr.pencolor('red')
   turtle.forward(100)
   turtle.right(90)
   turtle.mainloop()
   ```

7. 可以使用Python中内置的函数对变量类型进行转换。

   - `int()`：将一个数值或字符串转换成整数，可以指定进制。
   - `float()`：将一个字符串转换成浮点数。
   - `str()`：将指定的对象转换成字符串形式，可以指定编码。
   - `chr()`：将整数转换成该编码对应的字符串（一个字符）。
   - `ord()`：将字符串（一个字符）转换成对应的编码（整数）。


 

### 2020/02/23

1. Numpy 是Numerical Python的简称，是python中高性能科学计算和数学分析的基础包。Numpy提供了一个多维数组类型ndarray，具有矢量算术运算和复杂广播的能力。在使用python调用飞桨API完成深度学习任务的过程中，通常会使用Numpy实现数据预处理和一些模型指标的计算，飞桨中的Tensor数据可以很方便的和ndarray数组进行相互转换。

2. ~~~ python
   d = np.fromfile(',/work/housing.data',sep='')
   ~~~

3. ~~~python
   a = np.random.rand(3,3)
   np.save('a.npy',a)
   
   b = np.load('a.npy')
   
   check = (a==b).all() #检查a和b的数值是否一样  True
   ~~~

4. 

<img src="C:\Users\13416\AppData\Roaming\Typora\typora-user-images\image-20200224181747378.png" alt="image-20200224181747378" style="zoom:50%;" />



5.<img src="C:\Users\13416\AppData\Roaming\Typora\typora-user-images\image-20200224183531487.png" alt="image-20200224183531487" style="zoom:80%;" />

6.

























