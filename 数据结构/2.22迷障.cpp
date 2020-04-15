#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while( scanf("%d",&n) != EOF ) {
        for( int i = 0; i < n; i++) {
            int m,v,c;
            scanf("%d%d%d",&c,&v,&m);
            int p[100];
            for( int j = 0; j < c; j++) {
                scanf("%d",&p[j]);
            }
            sort(p,p+c);
            int Vsum = 0;
            // Vsum = 0;
            // P = 0.0;
            float P = 0.0;
            for( int k = 0; k < c; k++) {
                if( (P * Vsum + p[k] * v) / ( v + Vsum) > m) 
                    break;
                else {
                    P = (P * Vsum + p[k] * v) / (v + Vsum);
                    Vsum += v;
                }
            }
            if( c == 0) 
                printf("0 0.0\n");
            else 
                printf("%d %.2f\n",Vsum,P/100);
        }
    }
    return 0;
}
