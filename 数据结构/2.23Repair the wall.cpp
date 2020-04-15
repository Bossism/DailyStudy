#include<iostream>
#include<algorithm>
using namespace std;

bool cmp( int x, int y) {
    return x > y;
}
int main(int argc, char const *argv[])
{
    int n,m;
    while( scanf("%d%d",&n,&m) != EOF ) {
        int a[100];
        for( int i = 0; i < m;i++) {
            scanf("%d",&a[i]);
        }
        sort(a,a+m,cmp);
        int ans = 0;
        // int currentlength = 0;
        for( int i = 0; i < m;i++) {
            if( a[i] <= n) {
                n -= a[i];
                ans++;
            }else break;
        }
        if( n == 0) 
            printf("%d\n",ans);
        else 
            printf("No Answer!\n");
        
    }
    return 0;
}
