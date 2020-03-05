// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node
// {
//     char value;
//     struct node *next;
// }Node; 

// typedef struct list 
// {
//     Node * head;
//     Node * tail;
// }List;

// void print(Node *head,int number);
// Node * toBinary( int number);
// int Addition(Node *num1, Node *num2);

// int main(int argc, char const *argv[])
// {
//     int number1 = 0x55555555;
//     int number2 = 0x22222222;
//     Node * head1 = toBinary(number1);
//     Node * head2 = toBinary(number2);

//     print(head1,number1);
//     print(head2,number2);

//     int rest = Addition(head1,head2);
//     printf("%d\n",rest);
//     return 0;
// }

// void print(Node *head,int number) {
//     Node *q;
//     for( q=head;q;q=q->next ) {
//         printf("%d",q->value);
//     }
//     printf("\n");
// }

// Node * toBinary ( int number) {
//     unsigned mask = 1u<<31;
//     Node *head = NULL;
//     for (; mask ; mask>>=1) {
//         Node *p = (Node *)malloc(sizeof(Node));
//         p->value = number&mask ? 1 : 0;
//         p->next = NULL;
//         Node *last = head;
//         if( last) {
//             while( last->next ) {
//                 last = last->next;
//             }
//             last->next = p;
//         } else {
//             head = p;
//         }   
//     }
//     return head;
// }


// int Addition(Node *num1, Node *num2) {
//     int x = num1->value ^ num2->value;
//     int y = num1->value & num2->value;

// 	while (y != 0) {
// 		// y = y << 1;
//         y = num1->next->value & num2->next->value;
// 		int temp = x;
// 		x = x ^ y;
// 		y = temp & y;
// 	}
// 	return x;
// }


/*#include<stdio.h>
int Addition(int num1,int num2);

int main(int argc, char const *argv[])
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int res = Addition(num1,num2);
    printf("%d\n",res);
    return 0;
}

int Addition(int num1,int num2) {
    int x = num1 ^ num2;
    int y = num1 & num2;
    while (y)
    {
        y = y<<1;
        int temp = x;
        x = x ^ y;
        y = temp & y;
    }
    return x;
    
}*/

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    char n;
    while( scanf("%c",&n) != EOF) {
        if( n >= 'A' && n <= 'Z') {
            printf("%c",n+32);
        } else {
            printf("%c",n);
        }
    }
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    struct tree *left;
    struct tree *right;
    int value;
}TREE;

void creatTree(TREE *pt);

int main(int argc, char const *argv[])
{
    TREE *root = NULL;
    creatTree(root);
    return 0;
}

void creatTree(TREE *pt)
{
    int n;
    scanf("%d",&n);
    if( n == -1) {
        pt = NULL;
        exit(-1);
    }
    else {
        TREE *pt = (TREE *)malloc(sizeof(TREE));
        pt->value = n;
        printf("%d\t",pt->value);
        creatTree(pt->left);
        creatTree(pt->right);
    }
    
}


