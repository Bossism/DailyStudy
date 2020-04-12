#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

struct Student {
    char id[5];
    char name[20];
    char gender[5];
    int age;

    bool operator < (const Student & A) const {
        return strcmp(id,A.id) < 0;
    }
}buf[1000];

int main(int argc, char const *argv[])
{
    // Student s;
    int n;
    while (  scanf("%d",&n) !=EOF) {
        for( int i=0;i<n;i++) {
            scanf("%s%s%s%d",buf[i].id,buf[i].name,buf[i].gender,&buf[i].age);
        }
        sort(buf,buf+n);
        int m;
        scanf("%d",&m);
        while ( m-- != 0) {
                char num[30];
                scanf("%s",num);
                int score = -1;
                int left = 0;
                int right = n - 1;
                while( left <= right) {
                    int mid = ( left + right) / 2;
                    int c = strcmp(buf[mid].id,num);
                    if( c == 0) {
                        score = mid;
                        break;
                    }
                    else if( c > 0 ) {
                        right = mid - 1;
                    }
                    else {
                        left = mid + 1;
                    }
                }
                if( score == -1) {
                    printf("No Answer!\n");
                }
                else {
                    printf("%s %s %s %d\n",buf[score].id,buf[score].name,buf[score].gender,buf[score].age);
                }
            }
        }
    return 0;
}
