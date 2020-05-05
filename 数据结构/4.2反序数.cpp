#include<stdio.h>
bool isMatch(int n); // 判断9*n与n的反序列数是否相同
int main(int argc, char const *argv[])
{
    int n;
    int ans = 0;
    int array[5];
    int reverse = 0;
    int k = 1000;
    for(  int p = 1000; p <= 1111; p++) {
        if(isMatch(p))
            printf("%d\n",p);
    }
    // isMatch(2345);
    return 0;
}

bool isMatch(int n) {
        int ans = n * 9;
        int array[4];
        int reverse = 0;
        int k = 1000;
        int p = n;
        for( int i = 0; i < 4; i++ ) {
            array[i] = n % 10;
            n /= 10;
        }
        for( int j = 0; j <=3 ; j++) {
            reverse += array[j] * k;
            k /= 10;
        }
        if( reverse == ans ) 
            return true;
        else 
            return false;
}


#include <stdio.h>

int main() {
    int n = 1000;
    while (n < 2000) {
        int temp = n;
        int reverse = 0;
        while (temp > 0) {
            reverse = 10 * reverse + temp % 10;   // remember minbao !!!
            temp /= 10;
        }
        if (n * 9 == reverse) {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}
