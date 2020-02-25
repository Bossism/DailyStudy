//小套路 保存原来的数字
/*include<stdio.h>
int main() {
    int x;
    int ret = 0;
    scanf("%d",&x);
    int t = x;
    while( x > 1) {
        x /= 2;
        ret++;
    }
    printf("log2 of %d is %d\n",t,ret);
    return 0;
}*/

//猜数游戏
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(0));
    int number = rand()%100 + 1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100之间的数：");
    do {
        printf("请猜这个1到100之间的数：");
        scanf("%d",&a);
        count++;
        if( a > number) {
            printf("你猜的数大了");
        } else if( a < number) {
            printf("你猜的数小了");
        } 
    }while (a != number);
    printf("你用了%d次就猜到了答案\n",count); 
    return 0;
}*/

