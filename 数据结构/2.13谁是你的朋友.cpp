#include<stdio.h>
int main(int argc, char const *argv[])
{
    int book[201] = {0};
    int person[201] = {0};
    int n,m;
    while( scanf("%d%d",&n,&m) != EOF) {
        for( int i=1;i<=n;i++) {
            int x;
            scanf("%d",&x);
            person[i] = x;
            book[person[i]]++;
        }
        for( int i=1;i<=n;i++) {
            if( book[person[i]] == 1) {
                printf("BeiJu\n");
            }else {
                printf("%d\n",book[person[i]] - 1);
            }
        }
    }
    return 0;
}

