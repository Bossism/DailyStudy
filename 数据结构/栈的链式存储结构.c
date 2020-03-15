#include<stdio.h>
#include<stdlib.h>

typedef struct StackNode {
    int data;
    struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack {
    LinkStackPtr top;
    int count;
}LinkStack;


int Push( LinkStack *S, int e);
int Pop( LinkStack *S, int *e);
void Print( LinkStack S);

int main(int argc, char const *argv[])
{
    LinkStack S;
    S.count = 1;
    S.top->data = 100;
    // S.top->next = NULL;
    Push(&S,1000);
    Print(S);
    return 0;
}

void Print( LinkStack S) {
    while( S.count ) {
        printf(" %d ",S.top->data);
        S.top = S.top->next;
        // S.count--;
    }
    printf("\n");
}

int Push( LinkStack *S, int e) {
    LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
    s->data = e;
    s->next = S->top;
    S->top = s;
    S->count++;
    return 1;
}

int Pop( LinkStack *S, int *e) {
    LinkStackPtr p;
    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    free(p);
    S->count--;
    return 1;
}
