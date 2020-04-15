#include<stdio.h>
#include<string.h>

struct Node {
    Node *lchild;
    Node *rchild;
    int c;
}Tree[100];
int loc;

Node *creat( ) {
    Tree[loc].lchild = Tree[loc].rchild = NULL;
    return &Tree[loc++];
}

char str1[25],str2[25];
int size1,size2; //保存在字符数组中的遍历得到字符个数
char *str;  //当前正在保存字符串
int *size;  //当前正在保存字符串的字符个数

void preOrder( Node *T ) {
    str[(*size)++] = T->c + '0';
    if( T->lchild != NULL )
        preOrder(T->lchild);
    if( T->rchild != NULL ) {
        preOrder(T->rchild);
    }
}
void inOrder( Node *T ) {
    if( T->lchild != NULL )
        preOrder(T->lchild);
    str[(*size)++] = T->c + '0';
    if( T->rchild != NULL ) {
        preOrder(T->rchild);
    }
}

Node *insert( Node *T,int x ) {
    if( T == NULL ) {
        T = creat();
        T->c = x;
        return T;
    }
    else if( T->c < x ) {
        T->rchild = insert( T->rchild,x);
    }
    else if( T->c > x ) {
        T->lchild = insert( T->lchild , x );
    }
    return T;
}

int main(int argc, char const *argv[])
{
    int n;
    char tmp[12];
    while( scanf("%d",&n) != EOF ) {
        if( n == 0)
            break;
        loc = 0;
        Node *T = NULL;
        scanf("%s",tmp);
        for( int i = 0; tmp[i] != 0; i++) {
            T = insert(T,tmp[i]-'0');
        }
        size1 = 0;
        str = str1;
        size = &size1;
        preOrder(T);
        inOrder(T);
        str1[size1] = 0;
        while( n-- ) {
            scanf("%s",tmp);
            Node *T2 = NULL;
            for( int i = 0; i < tmp[i] != 0; i++) {
                T2 = insert(T2,tmp[i]-'0');
            }
            size2 = 0;
            str = str2;
            size = &size2;
            preOrder(T2);
            inOrder(T2);
            str2[size2] = 0;
            int ans = strcmp(str1,str2);
            if( ans == 0)
                printf("YES\n");
            else 
                printf("NO\n");
        }
    }
    return 0;
}
