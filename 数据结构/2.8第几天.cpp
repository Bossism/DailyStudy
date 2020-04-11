#include<iostream>
#include<algorithm>
using namespace std;

int dayOfMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};

int isLeap( int x) {
    if( x % 100 != 0 && x % 4 == 0 || x % 400 == 0)
        return  1;
    else 
        return -1;
}
int main(int argc, char const *argv[])
{
    int d,m,y;
    int i;
    // int cnt = 0;
    while ( scanf( "%d%d%d",&y,&m,&d) != EOF) {
        int cnt = 0;
        if( isLeap(y) == 1) {
            dayOfMonth[1] = 29;
        }
        else 
            dayOfMonth[1] = 28;
        for( i = 0; i<m-1; i++) {
            cnt += dayOfMonth[i];
        }
        cnt += d;
        cout << cnt << endl;
    }
    return 0;
}
