#include<stdio.h>
#include<queue>
using namespace std;

priority_queue<int , vector<int>, greater<int> > Q;  //创建一个小顶堆

int main(int argc, char const *argv[])
{
    int n;
    while ( scanf("%d",&n) != EOF ) {
        if( !Q.empty()) Q.pop();
        for( int i = 0; i < n; i++) {
            int m;
            scanf("%d",&m);
            Q.push(m);
        }
        int ans = 0;
        while( Q.size() > 1) {
            int a,b;
            a = Q.top();
            Q.pop();
            b = Q.top();
            Q.pop();
            ans += a + b;
            // printf("%d\n",ans);
            Q.push( a + b );
        }
        printf("%d\n",ans);
    }
    return 0;
}
