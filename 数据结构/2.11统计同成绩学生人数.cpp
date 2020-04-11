#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    while ( scanf("%d",&n) != EOF && n > 0) {
        int buf[101] = {0};
        for( int i=1; i<=n;i++) {
            int x;
            scanf("%d",&x);
            buf[x]++;
        }
        int tmp;
        scanf("%d",&tmp);
        printf("%d\n",buf[tmp]);
    }
    return 0;
}
