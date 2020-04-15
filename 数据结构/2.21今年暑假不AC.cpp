#include<iostream>
#include<algorithm>
using namespace std;

struct time {
    int start;
    int end;

    bool operator < (const time & A) const {
        return end < A.end;
    }
}buf[100];

int main(int argc, char const *argv[])
{
    int n;
    while( scanf("%d",&n) != EOF ) {
        if( n == 0) 
            break;
        for( int i = 0; i < n; i++) {
            scanf("%d%d",&buf[i].start,&buf[i].end);
        }
        sort( buf, buf+n);
        int ans = 0;
        int currenttime = 0;
        for( int i = 0; i < n ;i++) {
            if( currenttime <= buf[i].start) {
                currenttime = buf[i].end;
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
