/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int array[100];
    while( scanf("%d",&n) != EOF) {
        for( int i = 0; i< n; i++) {
            scanf("%d",&array[i]);
        }
        for( int i = 0;i< n; i++) {
            for( int j = 0; j< n-1-i; j++) {
                if( array[j] > array[j+1]) {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
            }
/*
        }
        for( int k = 0 ; k< n; k++) {
            printf("%d ",array[k]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int array[100];
    while( scanf("%d",&n) != EOF) {
        for( int i=0; i<n; i++) {
            scanf("%d",&array[i]);
        }
        sort( array, array+n);
        for( int j=0 ;j< n;j++) {
            printf("%d ",array[j]);
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp( int x, int y) {
    return x > y;
}
int main(int argc, char const *argv[])
{
    int n;
    int array[100];
    while( scanf("%d",&n) !=EOF) {
        for( int i=0 ;i<n ;i++) {
            scanf("%d",&array[i]);
        }
        sort(array,array+n,cmp);
        for( int j=0; j< n; j++) {
            printf("%d ",array[j]);
        }
        printf("\n");
    }
    return 0;
}


