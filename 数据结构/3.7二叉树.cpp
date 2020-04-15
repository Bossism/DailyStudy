/*
一个节点m的左右孩子分别是2*m,2*m+1,
如果n的值大于这个右孩子的值说明还在下一层，应该继续遍历,
当节点的值小等于于右孩子的值是结束遍历。
下一层的最左边的节点的值是当前层的最左边节点的值*2，
下一层最右边的节点的值是当前层的最右边的节点的值*2+1,
据此可以知道每一层的最小值和最大值。
而每一层的节点的个数正好是right-left+1;
*/

//对于每一组测试数据，输出一行，该行包含一个整数，给出结点m所在子树中包括的结点的数目。

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,m;
    while( scanf("%d%d",&m,&n) != EOF ) {
        if( m == 0 && n == 0 || m > n)
            break;
        int ans = 0;
        if( m== n)
            ans = 1;
        else {
            ans = 1;
            int left = 2 * m;
            int right = 2 * m + 1;
            while( right <= n) {
                ans += right - left + 1;
                left = 2 * left;
                right = 2 * right + 1;
        }
        if( left <= n) {
            ans += n - left + 1;
        }
        printf("%d\n",ans);
    }
    }
    return 0;
}
