#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[200],b[200];
    int n;
    while( scanf("%d",&n) != EOF ) {
        for( int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);

        // for( int i=0;i<n;i++) {
        //     printf("%d",a[i]);
        // }

        // int left = 0;
        // int right = n - 1;
        int m;
        scanf("%d",&m);
        for( int j = 0; j < m;j++) {
            scanf("%d",&b[j]);
        }
        for( int i =0 ;i<m;i++) {
            int left = 0;
            int right = n - 1;
            int k = 0;
            while( left <= right ) {
                int mid = ( left + right ) / 2;
                if( a[mid] == b[i]){
                    printf("YES\n");
                    k = 1;
                    break;
                }
                else if( a[mid] > b[i])
                    right = mid - 1;
                else 
                    left = mid + 1;
            }
            if( k == 0) 
                printf("NO\n");
        }
    }
    return 0;
}
