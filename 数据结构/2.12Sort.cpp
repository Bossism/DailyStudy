#include<stdio.h>
#define OFFSET 500000
int Hash[1000001];
int main(int argc, char const *argv[])
{
    int n,m;
    while( scanf("%d%d",&n,&m) != EOF) {
        // for( int i = -500000; i <= 500000; i++) {
        //     Hash[OFFSET+i] = 0;
        // }
        for( int i = 1; i <= n;i++) {
            int x;
            scanf("%d",&x);
            Hash[OFFSET+x] = 1;
        }
        for( int j = 500000; j>=-500000; j--) {
            if( Hash[j+OFFSET] == 1) {
                printf("%d",j);
                m--;
                if( m != 0)
                    printf(" ");
                else {
                    printf("\n");
                    break;
                }
            }
        }
    }
    return 0;
}
