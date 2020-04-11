#include<iostream>
#include<algorithm>
using namespace std;

bool isLeap( int x) {
    if ( x % 100 != 0 && x % 4 == 0 || x % 400 == 0) 
        return true;
    else
    {
        return false;
    }
    
}
int main(int argc, char const *argv[])
{
    int dayOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int y,n;
    int i;
    int month = 0,day;
    while ( scanf("%d%d",&y,&n) != EOF) {
        int d = 0;
        if( isLeap(y) ) {
            dayOfMonth[1] = 29;
        }else if( !isLeap(y)) {
            dayOfMonth[1] = 28;
        }
        for( i = 0; i< 12 ;i++) {
            if( n > dayOfMonth[i]) {
                n -= dayOfMonth[i];
            }
            else {
                month = i + 1;
                printf("%d-%02d-%02d\n",y,month,n);  
                break;
            }
        }
    }
    return 0;
}
