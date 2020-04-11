#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int tree[10001] = {1};
    int tree[10001];
    for( int i=0; i<=10001; i++) {
        tree[i] = 1;
    }
    int n,m;
    while( scanf("%d%d",&n,&m) != EOF) {
        int cnt = 0;
        for( int i = 1; i<= m; i++) {
            int left,right;
            scanf("%d%d",&left,&right);
            for( int j=left; j<=right;j++) {
                tree[j] = 0;
            }
        }
        for( int i =0; i<=n ;i++) {
            // int cnt = 0;
            if( tree[i] == 1)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
