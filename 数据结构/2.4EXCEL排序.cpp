#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

struct E {
    char id[6];
    char name[8];
    int score;
}buff[100000];

bool cmp1( E a,E b) {
    return a.id < b.id;
}
bool cmp2( E a, E b) {
    int temp = strcmp( a.name, b.name);
    if( temp != 0)
        return temp < 0;
    else 
        return a.id < b.id;
}
bool cmp3( E a,E b) {
    if( a.score != b.score)
        return a.score < b.score;
    else 
        return a.id < b.id;
}

int main(int argc, char const *argv[])
{
    int n,m;
    int num = 0;
    while ( cin >> n ) {
        cin >> m;
        num++;
        if ( n > 0) {
            for( int i=0; i<n; i++) {
            // scanf("%s %s %d",buff[i].id,buff[i].name,&buff[i].score);
            cin >> buff[i].id >> buff[i].name >> buff[i].score;
        }
        if( m == 1)
            sort( buff,buff+n,cmp1);
        else if( m == 2)
            sort( buff,buff+n,cmp2);
        else if( m == 3)
            sort( buff,buff+n,cmp3);

        cout << "Case " << num << ":" <<  endl;
        for ( int j=0;j<n;j++) {
            cout << buff[j].id << "  " << buff[j].name << "  " << buff[j].score << endl;
        }
        }
        // else continue;
    }
    return 0;
}
