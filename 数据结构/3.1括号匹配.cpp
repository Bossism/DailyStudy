#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
stack<int>S;
int main(int argc, char const *argv[])
{
    char str[100];
    char ans[100];
    while( scanf("%s",str) != EOF ) {
        int i;
        for( i = 0; str[i] != 0; i++) {
            if( str[i] == '(') {
                S.push(i);
                ans[i] = ' ';
            }
            else if( str[i] == ')') {
                if( !S.empty()) {
                    S.pop();
                    ans[i] = ' ';
                }
                else {
                    ans[i] = '?';
                }
            }
            else {
                ans[i] = ' ';
            }
        }
        while( !S.empty() ) {
            S.pop();
            ans[ S.top() ] = '$';
        }
        ans[i] == 0;
        cout << str << endl;
        cout << ans << endl;
    }
    return 0;
}
