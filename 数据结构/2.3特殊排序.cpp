#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int array[1000];
    while( cin >> n) {
        for( int i=0; i<n;i++)
            cin >> array[i];
    sort( array,array+n);
    cout << array[n-1] << endl;
    if( n == 1) {
        cout << -1 << endl;
        continue;
    // }
    }else {
        for( int i=0; i< n-1; i++) {
            if( i != n-2)
                cout << array[i] << " ";
            else 
                cout << array[i] <<  endl;
        }
    }
    }
    return 0;
}
