/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    while( scanf("%d%d",&a,&b) != EOF ) {
        int array1[20];
        int array2[20];
        int size1 = 0;
        int size2 = 0;
        while( a != 0) {
            array1[size1++] = a % 10;
            a /= 10;
        }
        while( b != 0) {
            array2[size2++] = b % 10;
            b /= 10;
        }
        int ans = 0;
        for( int i = 0; i < size1; i++) {
            for( int j = 0; j < size2; j++) {
                ans += array1[i] * array2[j];
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char array1[20],array2[20];
    int ans = 0;
    while( scanf("%s%s",array1,array2) != EOF ) {
        for( int i = 0; array1[i] != 0; i++) {
            for( int j = 0; array2[j] != 0; j++) {
                ans += (array1[i] - '0') * (array2[j] - '0');
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

