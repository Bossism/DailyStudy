#include<iostream>
#include<algorithm>
using namespace std;

struct goods {
    double m;
    double f;
    double s;

    bool operator < (const goods & A) const {
        return s > A.s;
    }
}buf[200];

int main(int argc, char const *argv[])
{
    int n;
    double m;
    while( scanf("%lf%d",&m,&n) != EOF ) {
        if( m == -1 && n == -1)
            break;
        for( int i = 0; i < n; i++) {
            scanf("%lf%lf",&buf[i].m,&buf[i].f);
            buf[i].s = buf[i].m / buf[i].f;
        }
        sort(buf,buf+n);
        int idx = 0;
        double ans = 0;
        while( m > 0 && idx < n) {
            if( m > buf[idx].f) {
                ans += buf[idx].m;
                m -= buf[idx].f;
            }
            else {
                ans += buf[idx].m / buf[idx].f * m;
                m = 0;
            }
            idx++;
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
