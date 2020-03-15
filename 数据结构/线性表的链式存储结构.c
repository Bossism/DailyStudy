#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node,*LinkList;

void Print( LinkList L);
int GetElem( LinkList L,int i,int *e);
int ListInsert( LinkList *L,int i,int e);
int ListDelete( LinkList *L,int i,int *e);
void CreateListHead( LinkList *L,int n);
int ClearList( LinkList *L);

int main(int argc, char const *argv[])
{
    LinkList L;
    int e;
    CreateListHead(&L,10);
    Print(L);
    GetElem(L,3,&e);
    printf("%d \n",e);
    ListDelete(&L,5,&e);
    Print(L);
    ListInsert(&L,5,1000);
    Print(L);
    return 0;
}

void Print( LinkList L) {
    LinkList p = L;
    while( p->next != NULL ) {
        printf(" %d ",p->data);
        p = p->next;
        // L = L->next;
    }
    printf("\n");
}

int GetElem( LinkList L,int i,int *e) {
    LinkList p;
    p = L->next;
    int j = 1;
    while( j < i && p) {
        p = p->next;
        j++;
    }
    if ( !p || j>i) {
        return -1;
    }
    *e = p->data;
    return 1;
}

int ListInsert( LinkList *L,int i,int e) {
    LinkList p,s;
    p = *L;
    int j = 1;
    while( p && j < i) {
        p = p->next;
        j++;
    }
    if( !p || i < j) 
        return -1;
    s = (LinkList )malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return 1;
}

int ListDelete( LinkList *L,int i,int *e) {
    LinkList p,s;
    p = *L;
    int j = 1;
    while( p->next && j < i) {
        p = p->next;
        j++;
    }
    if ( j > i || !(p->next ))
        return -1;
    s = p->next;
    p->next = s->next;
    *e = s->data;
    free(s);
    return 1;
}

/* 头插法 */
// void CreateListHead( LinkList *L,int n) {
//     LinkList p;
//     srand( time(0));
//     *L = ( LinkList )malloc(sizeof(Node));
//     (*L)->next = NULL;
//     for ( int i = 0; i< n;i++) {
//         p = (LinkList)malloc(sizeof(Node));
//         p->data = rand()%100 +1;
//         p->next = (*L)->next;
//         (*L)->next = p;
//     }
// }

/* 尾插法 */
void CreateListHead( LinkList *L,int n) {
    LinkList p,r;
    srand( time(0));
    // L = (LinkList *)malloc(sizeof(Node));   错误写法
    *L = ( LinkList )malloc(sizeof(Node));
    r = *L;  // r为指向尾部的节点
    for ( int i = 0; i< n;i++) {
        p = (LinkList)malloc(sizeof(Node));
        p->data = rand()%100 +1;
        r->next = p;  // 将尾部终端节点的指针指向新节点
        r = p;  // 将当前的新节点定义为尾表终端结点
    }
    r->next = NULL;  //表示当前结点结束
}

int ClearList( LinkList *L) {
    LinkList p,q;
    p = (*L)->next;
    while( p ) {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL;
    return 1;
}