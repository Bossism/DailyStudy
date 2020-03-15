#include<stdio.h>

#define MAXSIZE 20
typedef struct sqDoubleStack {
    int data[MAXSIZE];
    int top1;
    int top2;
}SqDoubleStack;

int main(int argc, char const *argv[])
{
    return 0;
}

int Push( SqDoubleStack *S, int e, int stackNumber) {
    if( S->top1 + 1 == S->top2)
        return -1;
    if( stackNumber == 1) {
        S->data[++S->top1] = e;
    }
    else if( stackNumber == 2) {
        S->data[--S->top2] = e;
    }
    return 1;
}

int Pop( SqDoubleStack *S,int *e,int stackNumber) {
    if ( stackNumber == 1) {
        if( S->top1 = -1) 
            return -1;
        *e = S->data[S->top1--];
    }
    else if( stackNumber == 2) {
        if( S->top2 == MAXSIZE)
            return -1;
        *e = S->data[S->top2++];
    }
    return 1;
}
