#include<stdio.h>

#define MAXSIZE 20
typedef struct sqStack {
    int data[MAXSIZE];
    int top;
}SqStack;

void Print( SqStack S);
int Push( SqStack *S,int e);
int Pop( SqStack *S,int *e);

int main(int argc, char const *argv[])
{
    SqStack S;
    S.data[0] = 100;
    S.top = 0;         //要先初始化
    Push(&S,666);
    Print(S);
    int e;
    Pop(&S,&e);
    Print(S);
    return 0;
}

void Print( SqStack S) {
    while( S.top != -1 ) {
        printf(" %d ",S.data[S.top]);
        S.top--;
    }
    printf("\n");
}

int Push( SqStack *S,int e) {
    if( S->top == MAXSIZE-1 ) {
        return -1;
    }
    S->top++;
    S->data[S->top] = e;
    return 1;
}

int Pop( SqStack *S,int *e) {
    if( S->top == -1) 
        return -1;
    *e = S->data[S->top];
    S->top--;
    return 1;
}
