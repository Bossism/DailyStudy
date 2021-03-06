## 2020/02/25

1. 计算机所做的操作都是计算

2. 程序的执行：解释（借助一个程序，那个程序能试图理解你的程序，然后按照你的要求执行）
       编译（借助一个程序，就像一个翻译，把你的程序翻译成计算机真正能懂的语言-机器语言，然后这个机器语言写的程序就能直接执行了）

3. 对于计算机的编程语言来说，本身是不分解释和编译的。只是习惯用一种执行方式（C语言编译型，python解释型，但C语言可以写解释器，python也可以写编译器）编译型的语言有确定的运算性能，是多快就是多快，解释性可以随时修改代码，速度稍逊，需要有一个程序去理解代码，但是计算机速度越来越快，两种程序执行的方式在速度方面差距已经不是很显著。

4. C与Java不相上下，Java下降是因为有很多能代替它的语言出现，C在操作系统、嵌入式系统、驱动程序、游戏底层的引擎等的编写中是唯一的

5. 现代编程语言差异较小，可称为C-like语言

6. 1999年颁布C99标准，现在的编译器基本都是基于C99标准（变量可以随时定义，可以被const修饰等）

7. ```c
   printf("%f",...)
   scanf("%lf",...)
   ```

8. 双目运算符，比如➕，左右共有两个算子。  单目运算符，比如取反➖ ，只有一个算子

9. <img src="image\image-20200225154454900.png" alt="image-20200225154454900" style="zoom:70%;" />

10. 关系运算符的优先级低于普通的算数运算符，但是高于赋值运算符=

11. <img src="image\image-20200225162826268.png" alt="image-20200225162826268" style="zoom:67%;" />

12. // 是C99的注释，ANSI C 不支持

13. <img src="image\image-20200225164330314.png" alt="image-20200225164330314" style="zoom:60%;" />

14. switch(a) a必须是int类型的数

15. rand() 获得一个随机的整数

16. x % n 的结果是 [0.n-1]的一个整数

17. ```
    for( int i=1; i<=n; i++) {  for(初始条件，条件，每轮的动作)
    	fact *= i;
    }
    int i = 1;
    while( i<= n) {      初始条件 while(条件) {每轮的动作 }
    	fact *= i;
    	i++;
    }
    ```

18. Tips for loops: 

    ● 如果有固定次数，用for

    ● 如果必须执行一次，用do_while

    ● 其他情况用while

19. <img src="image\image-20200226204115908.png" alt="image-20200226204115908" style="zoom:70%;" />

20. <img src="image\image-20200226204443141.png" alt="image-20200226204443141" style="zoom: 80%;" />![image-20200226204513561](image\image-20200226204513561.png)

21. sizeof是静态运算符，它的结果在编译时刻就决定了，在sizeof括号中的运算是不会做的

22. <img src="image\image-20200226204837500.png" alt="image-20200226204837500" style="zoom:67%;" />

    64位编译器下long是8位，32位编译器下为4位  int和long表示“一个字”，受计算机影响，表达寄存器的字长

23. <img src="image\image-20200226205329934.png" alt="image-20200226205329934" style="zoom:80%;" />

24.  11111111被当作纯二进制看待时，是225，被当作补码看待时是-1。

    同理，对于-a，其补码就是 0 - a，实际就是 2^n - a，n是这种类型的位数

25. <img src="image\image-20200226205918119.png" alt="image-20200226205918119" style="zoom:67%;" />

26. <img src="image\image-20200227113455816.png" alt="image-20200227113455816" style="zoom:80%;" />

27. <img src="image\image-20200227113513176.png" alt="image-20200227113513176" style="zoom:67%;" />

28.  判断两个浮点数是否相等：

    ```c
    fabs(f1-f2) < 1e-12;
    ```

    

29. <img src="image\image-20200227115248189.png" alt="image-20200227115248189" style="zoom:67%;" />![](image\image-20200227120052720.png)

30.  \ t  到下一个表格位  \ b 是回退一格，shell将其理解为返回一格并将后面的元素写在这个位置，不同的shell也可能不同理解。 \ n 被翻译成要做回车\r和换行\n两个动作

31. <img src="image\image-20200227115248189.png" alt="image-20200227115248189" style="zoom:67%;" />![](image\image-20200227120052720.png)

32. ```
    #include<stdbool.h>
    之后就可以使用bool和true、false 输出仍是%d
    ```

33.  ```
    i = (3+4,5+6)  //i=11
    ```

34.  单一出口理念

35. <img src="image\image-20200227130731561.png" alt="image-20200227130731561" style="zoom:100%;" />

36. 

![image-20200227130752615](image\image-20200227130752615.png)

  C99 可以这么定义数组

37.  数组的长度： 

    ```c
    length = sizeof(a) / sizeof(a[0])
    ```

38. ```c
    printf("%p\n",&i);
    ```

39. C语言的内存模型： 本地变量分配在堆栈中，自顶向下分配，先写的变量地址更高，后写的更低，但是是连着存放的。

40. ```c
    int b[]  // = int * const b
    ```

41. <img src="image\image-20200228231637158.png" alt="image-20200228231637158" style="zoom:80%;" />

42. <img src="image\image-20200228231935936.png" alt="image-20200228231935936" style="zoom:80%;" />

43. <img src="image\image-20200228232139710.png" alt="image-20200228232139710" style="zoom:80%;" />

      const 在 * 的后面表示指针不能被修改

44. ```c
    const int a[] = {1,2,3,4,5,6}  // const表示数组中的每一个元素都不能被修改，必须在开始就赋值
    ```

45. <img src="image\image-20200228232809134.png" alt="image-20200228232809134" style="zoom:80%;" />

46. <img src="image\image-20200229134333674.png" alt="image-20200229134333674" style="zoom:67%;" />

47. <img src="image\image-20200229141933270.png" alt="image-20200229141933270" style="zoom:67%;" />

48.  ctrl + z win  /  ctrl + d  linux  EOF

49. <img src="image\image-20200229143906811.png" alt="image-20200229143906811" style="zoom:67%;" />

50.  枚举实际上是 int  类型，在C语言中主要是将其当作符号量来使用，而不是某种类型。

    ```
    enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
    
    ```

51. 