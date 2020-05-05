#include<stdio.h>

int main() {
    int n;
    while( scanf("%d",&n) != EOF) {
        int square = n * n;
        while ( n > 0)
        {
            if( square % 10 == n % 10) {
                square /= 10;
                n /= 10;
                if( n == 0) {
                    printf("YES!\n");
                    break;
                }
            }else {
                printf("NO!\n");
                break;
            }
        } 
    }
}