#include<stdio.h>

#define MAXSIZE 20
typedef struct queue {
    int data[MAXSIZE];
    int front;
    int rear;
}SqQueue;


int QueueLength(SqQueue Q);
int EnQueue(SqQueue *Q,int e);
int DeQueue(SqQueue *Q, int *e);
void PrintQueue( SqQueue Q);

int main(int argc, char const *argv[])
{
    SqQueue Q;
    Q.front = 0;
    Q.rear = 0;
    int e;
    EnQueue(&Q,100);
    EnQueue(&Q,666);
    EnQueue(&Q,888);
    PrintQueue(Q);
    DeQueue(&Q,&e);
    PrintQueue(Q);
    int length = QueueLength(Q);
    printf("%d\n",length);
    return 0;
}

void PrintQueue( SqQueue Q) {
    while( Q.front != Q.rear) {
        printf(" %d ",Q.data[Q.front]);
        Q.front++;
    }
    printf("\n");
}
int QueueLength(SqQueue Q) {
    return ( Q.rear - 0 + MAXSIZE - Q.front ) % MAXSIZE ;
}

int EnQueue(SqQueue *Q,int e) {
    if ( ( Q->rear + 1 ) % MAXSIZE == Q->front ) 
        return -1;
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1)%MAXSIZE;
    return 1;
}

int DeQueue(SqQueue *Q, int *e) {
    if( Q->front == Q->rear )
        return -1;
    *e = Q->data[Q->front];
    Q->front = (Q->front+1)%MAXSIZE;
    return 1;
}
