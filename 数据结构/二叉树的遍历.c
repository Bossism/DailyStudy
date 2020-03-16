#include<stdio.h>
#include<stdlib.h>

/*  二叉链表的结点结构定义 */
typedef struct BiTNode {
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

void PreOrderTraverse( BiTree T);
void CreatBiTree(BiTree *T);

int main(int argc, char const *argv[])
{
    BiTree T;
    CreatBiTree(&T);
    PreOrderTraverse(T);
    return 0;
}

void PreOrderTraverse( BiTree T) {
    if( T == NULL )
        return;
    printf(" %d ",T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
}

 /*创建二叉树函数*/
void CreatBiTree(BiTree *T)
  {
      int e;                        //结点数据
      scanf("%d", &e);
      if(e == -1)                        //如果输入为-1，当前结点为空
          (*T) = NULL;
      else
      {
          (*T) = (BiTree)malloc(sizeof(BiTNode));        //申请结点空间
          (*T)->data = e;                        //为当前结点赋值
          printf("请输入当前结点 %d 的左孩子，若没有左孩子，请输入-1\n", e);
          CreatBiTree(&( (*T)->lchild ));        //递归创建左子树
          printf("请输入当前结点 %d 的右孩子，若没有右孩子，请输入-1\n", e);
          CreatBiTree(&( (*T)->rchild ));        //递归创建右子树
      }
  }
