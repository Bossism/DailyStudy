#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i;
    while( scanf("%d",&n) != EOF ) {
        for( i = 1; i<= n; i++) {
            int j = n + (n - 1) * 2 - n - ( i - 1) * 2 ;
            while( j ) {
                printf(" ");
                j--;
            }
            int m = n + (i - 1) * 2;
            while( m ) {
                printf("*");
                m--;
            }
            printf("\n");
        }
    }
    return 0;
}
