#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int i;
    int array[200];
    int answer[200];
    while( scanf("%d",&n) != EOF ) {
        for( i = 0; i < n; i++) {
            int m;
            scanf("%d",&m);
            for( int j = 0; j < m;j++) {
                scanf("%d",&array[j]);
            }
            int num = 0;
            if( array[num] != array[num+1] ) {
                answer[num++] = 0;
            }
            if( array[m - 1] != array[ m - 2]) {
                answer[num++] = m - 1;
            }
            for( int k = 1; k < m - 1; k++) {
                if( (array[k] > array[k-1] && array[k]> array[k+1]) ||
                (array[k] < array[k-1] && array[k] < array[k+1]))
                    answer[num++] = k;
            }
            if( num != 0) {
                printf("%d ",answer[0]);
            }
            for( int i=1;i<num;i++) {
                printf("%d ",answer[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
