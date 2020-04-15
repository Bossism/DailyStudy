#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    while( scanf("%d",&n) != EOF ) {
        int a[100];
        for( int i = 1; i <= n; i++) {
            scanf("%d",&a[i]);
        }
        int m;
        scanf("%d",&m);
        int left = (int)pow(2,m-1);
        int right = (int)pow(2,m) - 1;
        if( left > n) {
            printf("EMPTY\n");
        }
        else {
            for( int i = left; i <= right && i <= n; i++) {
                if( a[i+1] == 0) {
                    printf("%d",a[i]);
                    break;
                }
                else {
                    printf("%d ",a[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
