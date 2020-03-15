#include<stdio.h>
#include<stdlib.h>

typedef struct QNode {
    int data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct {
    QueuePtr front,rear;
}LinkQueue;

int EnQueue( LinkQueue *Q, int e);
void PrintQueue( LinkQueue Q);
int DeQueue( LinkQueue *Q, int *e);

int main(int argc, char const *argv[])
{
    LinkQueue Q;
    Q.front->next = Q.rear->next = NULL;
    EnQueue(&Q,100);
    EnQueue(&Q,888);
    PrintQueue(Q);
    int e = 0;
    DeQueue(&Q,&e);
    PrintQueue(Q);
    return 0;
}

int EnQueue( LinkQueue *Q, int e) {
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    p->next = NULL;
    p->data = e;
    Q->rear->next = p;
    Q->rear = p;
    return 1;
}

void PrintQueue( LinkQueue Q) {
    while( Q.front != Q.rear) {
        printf(" %d ",Q.front->data);
        Q.front = Q.front->next;
    }
    printf("\n");
}

int DeQueue( LinkQueue *Q, int *e) {
    QueuePtr p ;
    if ( Q->front == Q->rear )
        return -1;
    p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;
    if( Q->rear == p) 
        Q->rear == Q->front;
    free(p);
    return 1;
}