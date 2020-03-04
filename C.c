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

//算平均数
/*#include<stdio.h>
int main() {
    int sum = 0;
    int count = 0;
    int number;
    scanf("%d",&number);
    while( number != -1) {
        sum += number;
        count++;
        scanf("%d",&number);
    }
    printf("%f\n",1.0*sum/count);
    return 0;
}*/

//整数的分解
/*#include<stdio.h>
int main() {
    int x = 12345;
    int digit;
    int ret = 0;
    while( x > 0) {
        digit = x % 10;
        printf("%d\n",digit);
        ret = ret*10 + digit;
        printf("x=%d,digit=%d,ret=%d",x,digit,ret);
        x /= 10;
    }
    return 0;
}*/

//阶乘
/*#include<stdio.h>
int main() {
    int n = 4;
    int sum = 1;
    for(int i = 1; i <= n;i++) {
        sum *= i;
        printf("%d\n",sum);
    }
    printf("%d\n",sum);
    return 0;
}*/

//素数
/*#include<stdio.h>
int main() {
    int x;
    int i = 2;
    // int isprime = 1;
    scanf("%d",&x);
    for( i=2;i<x;i++) {
        if( x % i == 0) {
            // isprime = 0; 
            break;       
        }
    }
    // if( isprime == 1) {
        if( i < x) {
        // printf("是素数\n");
        printf("不是素数\n");
    } else {
        // printf("不是素数\n");
        printf("是素数\n");
    }
    return 0;
}*/

// 1到100所有的素数
/*#include<stdio.h>
int main() {
    int i,j;
    int count = 0;
    for( i = 1; count < 50; i++) {
    // for( i = 1; i <= 100; i++) {
        int isPrime = 1;
        for( j =2; j < i; j++) {
            if ( i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if( isPrime == 1) {
            count++;
            printf("%5d",i);
            if( count % 5 == 0)
                printf("\n");
        }
    }
    return 0;
}*/

//凑硬币
/*#include<stdio.h>
int main() {
    int i,j,k;
    // int exit = 0;
    int x = 2;
    for( i = 1; i< x*10/2; i++) {
        for( j = 1; j < x*10/5; j++) {
            for( k = 1; k < x;k++) {
                printf("可以用%d个1元和%d个五角和%d个两角来得到%d元\n",k,j,i,x);
                // exit = 1;
                // break;
                goto out;
            }
            // if( exit == 1) break;
        }
        // if( exit == 1) break;
    }
out:
    return 0;
}*/

//求和*********************WHY***************************
/*#include<stdio.h>
int main() {
    int i;
    int n = 10000;
    double sum = 0.0;
    // int sign = 1;
    for( i = 1;i <= n;i++) {
        if( i % 2 == 0) {
            i = -i;
        }
        sum += 1.0/i;
        // sum += sign*1.0/i;
        // sign = -sign;
    }
    printf("f(%d)=%f\n",n,sum);
    // printf("%f",1.0/(-2));
    return 0;
}*****************************************************/

// 求输入整数的正序各位数字
/*#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int mask = 1;
    int t = x;
    while( t >= 10) {
        t /= 10;
        mask *= 10;
    }
    printf("x=%d, mask=%d\n",x,mask);
    do {
        int d = x / mask;
        printf("%d",d);
        if( mask >= 10) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    }while ( mask > 0);
    printf("\n");
    return 0;
}*/

//最大公约数
/*#include<stdio.h>
int main() {
    int a,b;
    int min;
    scanf("%d %d",&a,&b);
    if( a<b) {
        min = a;
    } else
    {
        min = b;
    }
    int ret = 0;
    int i;
    for( i=1; i<=min; i++) {
        if( a%i == 0) {
            if( b%i == 0) {
                ret = i;
            }
        }
    }
    printf("%d和%d的最大公约数是%d\n",a,b,ret);
    return 0;
}*/
/*int main() {
    int a,b,t;
    scanf("%d %d",&a,&b);
    while( b!= 0) {
        t = a % b;
        a = b;
        b = t;
        printf("a=%d,b=%d,t=%d\n",a,b,t);
    }
    printf("prd = %d\n",a);
    return 0 ;
}*/

// 给出2 结果给出用2345拼写的所有3位数情况
/*#include<stdio.h>
int main() {
    int i,j,k;
    int a;
    int cnt = 0;
    scanf("%d",&a);
    for(i = a; i<= a+3; i++) {
        for(j = a;j<= a+3;j++) {
            for(k = a;k<=a+3;k++) {
                if( i!=j && i!=k && j!=k) {
                    cnt++;
                    printf("%d%d%d",i,j,k);
                    if( cnt == 6) {
                    printf("\n");
                    cnt = 0;
                } else {
                    printf(" ");
                }
            }
        }
    }
    }return 0;
}*/

// 水仙花数
/*#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int first = 1;
    int i = 1;
    while( i < n) {
        first *= 10;
        i++;
    }printf("first=%d\n",first);
    i = first;
    while( i< first*10) {
        int t = i;
        int sum = 0;
        do
        {
            int d = t % 10;
            t /= 10;
            int p = d;
            int j = 1;
            while( j < n) {
                p *= d;
                j++;
            }
            sum += p;
        } while (t > 0);
        if( sum == i) {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}*/

//乘法表
/*#include<stdio.h>
int main() {
    int i,j;
    int cnt = 1;
    for(i = 1;i<=9;i++) {
        for(j = 1;j<i+1;j++) {
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }

    return 0;
}*/

//统计给定整数区间内素数的个数并对其求和
/*#include<stdio.h>
int main() {
    int a,b;
    int i,j;
    int cnt  = 0;
    int sum = 0;
    scanf("%d %d",&a,&b);
    if( a == 1)
        a =2;
    for( i = a;i<=b;i++) {
        int isprime = 1;
        for(j=2;j<i;j++) {
            if( i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if( isprime == 1) {
            cnt++;
            sum += i;
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n < 0) {
        printf("fu\n");
        n = -n;
    }
    int t = n;
    int mask = 1;
    while( t >= 10) {
        t /= 10;
        mask *= 10;
    }
    printf("t=%d,mask=%d\n",t,mask);
    do
    {
        int d = n / mask;
        switch (d)
        {
        case 0:
            printf("Ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        default:
            break;
        }
        if( mask > 9)
            printf(" ");
        n %= mask;
        mask /= 10;
    } while (mask>0);
    printf("\n");
    
    return 0;
}*/

//数组的应用
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    while ( (ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
size_t mylen(const char* s);
int main(int argc, char const *argv[])
{
    char line[] = "hello";
    printf("mylen=%lu\n",mylen(line));
    printf("sizeof=%lu\n",sizeof(line));
    return 0;
}
size_t mylen(const char* s)
{
    int idx = 0;
    while ( s[idx] != '\0')
    {
        idx++;
    }
    return idx;
    
}*/

/*#include<stdio.h>
#include<string.h>
int mycmp(const char* s1,const char* s2);
int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "bcd";
    printf("%d\n",mycmp(s1,s2));
    printf("%d\n",'a'-'A');
    return 0;
}
int mycmp(const char* s1,const char* s2) {
    int idx = 0;
    while (s1[idx] == s2[idx] && s1[idx] != '\0') {
        idx++;
    }
    return s1[idx] - s2[idx];   

    //while( *s1 == *s2 && *s1 != '\0') {
    //    s1++;
     //   s2++:
   // }
   // return *s1 - *s2;
}*/

/*char* mycpy(char* dst,const char* src) {
    // int idx = 0;
    // while( src[idx]) {
    //     dst[idx] = src[idx];
    //     idx++;
    // }
    // dst[idx] = '\0';
    char* ret = dst;
    while( *dst++ = *src++ );
    *dst = '\0';
    return ret;
}*/

/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char s[] = "hello";
    char *p = strchr(s,'l');
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(p)+1);
    // strcpy(t,p);
    strcpy(t,s);
    // p = strchr(p+1,'l');
    // printf("%s\n",p);
    printf("%s\n",t);
    free(t);
    return 0;
}*/

/*#include<stdio.h>
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
int main(int argc, char const *argv[])
{
    int color = -1;
    char *ColorNames[NumCOLORS] = {"red","yellow","green"};
    char *colorName =  NULL;
    printf("输入你喜欢的颜色的代码:");
    scanf("%d",&color);
    if( color >=0 && color < NumCOLORS) {
        colorName = ColorNames[color];
    } else {
        colorName = "unknown";
    }
    printf("你喜欢的颜色是%s\n",colorName);
    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
}Node; 
int main(int argc, char const *argv[])
{
    Node * head = NULL;
    int number;
    do {
        scanf("%d",&number);
        if( number != -1) {
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            Node *last = head;
            if( last ) {
                while( last->next) {
                    last = last->next;
                }
                last->next = p;
            } else {
                head = p;
            }
        }

    }while(number != -1);
    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
}Node;

typedef struct _list {
    Node* head;
    Node* tail;
}List;

void add(List* plist,int number);
void print(List *list);

int main(int argc, char const *argv[])
{
    // Node *head = NULL;
    List list;
    int number;
    list.head = list.tail = NULL;
    do
    {
        scanf("%d",&number);
        if( number != -1) {
            add(&list,number);
        }
    } while ( number != -1);
    print(&list);

    scanf("%d",&number);
    Node *p;
    int isFound = 0;
    for( p=list.head; p; p=p->next) {
        if( p->value == number) {
            print("找到了！\n");
            isFound = 1;
            break;
        }
    }
    if( !isFound ) {
        print("没找到！\n");
    }

    Node *q;
    for ( q=NULL,p=list.head; p; q=p,p=p->next) {
        if( p->value == number) {
            if( q ) {
                q->next = p->next;
            } else {
                list.head = p->next;
            }
            free(p);
            break;
        }
    }

    // for( p=head; p; p=q) {
    //     q = p->next;
    //     free(p);
    // }

    return 0;
}

void print(List *list) {
    Node *p;
    for( p=list->head; p ; p=p->next) {
        printf("%d\t",p->value);
    }
    printf("\n");
}
void add(List* plist,int number) 
{
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    Node *last = plist->head;
    if( last) {
        while( last->next) {
            last = last->next;
        }
        last->next = p;
    } else {
        plist->head = p;
    }
    // return head;
} */









