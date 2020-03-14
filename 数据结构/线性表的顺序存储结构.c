/* 将所有不在线性表La中但在Lb中的数据元素插入到La中*/
#include<stdio.h>

#define MAXSIZE 20
typedef struct list {
    int data[MAXSIZE];
    int length;
}List;

int ListLength( List La);
int GetElem( List La,int i,int *e);
int ListInsert( List *La, int i,int e);
int ListDelete( List *La, int i,int *e);
int LocateElem(List La,int e);

int main(int argc, char const *argv[])
{
    List La;
    List Lb;
    int la_len,lb_len;
    int e;
    for( int j = 0; j< 5;j++)
        La.data[j] = j;
    La.length = 5;
    for( int j = 0; j< 4;j++)
        Lb.data[j] = j+10;
    Lb.length = 4;
    la_len = ListLength(La);
    lb_len = ListLength(Lb);

    for(  int i = 0;i< La.length; i++) {
        printf( " %d ",La.data[i]);
    }
    printf("\n");

    for(  int i = 0;i< Lb.length; i++) {
        printf( " %d ",Lb.data[i]);
    }
    printf("\n");

    for( int i = 1; i <= lb_len; i++) {
        GetElem(Lb,i,&e);
        if( !LocateElem(La,e)) {
            ListInsert(&La,3,e);
            // ListInsert(&La,++la_len,e);    这样写为什么就添加不进去呢...求解答

        }
    }
    for(  int i = 0;i< La.length; i++) {
        printf( " %d ",La.data[i]);
    }
    printf("\n");

    for(  int i = 0;i< Lb.length; i++) {
        printf( " %d ",Lb.data[i]);
    }
    printf("\n");

    ListDelete(&La,3,&e);
    for(  int i = 0;i< La.length; i++) {
        printf( " %d ",La.data[i]);
    }
    printf("\n 被删除的数是:%d\n",e);

    ListInsert(&La,5,100);
    for(  int i = 0;i< La.length; i++) {
        printf( " %d ",La.data[i]);
    }
    printf("\n");
    return 0;
}

int ListLength( List La) {
    if( La.length <=0 )
        return -1;
    return La.length;
}

int GetElem( List La,int i,int *e) {
    if( La.length < 0 || i < 0 || i > La.length) {
        return -1;
    }
    *e = La.data[i-1];
    return 0;
}

int ListInsert( List *La, int i,int e) {
    if( i < 0 || i > La->length || La->length == MAXSIZE)
        return -1;
    if( i < La->length) {
        for( int j=La->length-1; j>=i-1; j--) {
            La->data[j+1] = La->data[j];
        }
        La->data[i-1] = e;
        La->length++;
    }
    return 0;
}

int ListDelete( List *La, int i,int *e) {
    if( La->length <= 0 || i < 0 || i > La->length)
        return -1;
    *e = La->data[i-1];
    for( int j = i-1 ; j<= La->length-1; j++) {
        La->data[j] = La->data[j+1];
    }
    La->length--;
    return 0;
}

int LocateElem(List La,int e) {
    int is_Find = 0;
    for( int i=0; i<=La.length-1; i++) {
        if( e == La.data[i]) {
            is_Find = 1;
            break;
        }
    }
    return is_Find;
    
}

