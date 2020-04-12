#include<stdio.h>
int main(int argc, char const *argv[])
{
    int tmp[201];
    int x;
    while( scanf("%d",&x) != EOF) {
        for( int i = 0;i<x;i++) {
            scanf("%d",&tmp[i]);
        }
        int ans = -1;
        int c;
        scanf("%d",&c);
        for( int j = 0;j<x;j++) {
            if( tmp[j] == c) {
                ans = j;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
