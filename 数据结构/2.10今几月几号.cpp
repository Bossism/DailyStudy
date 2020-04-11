#include<stdio.h>
int dayOfMonth[13][2] = {0,0,31,31,28,29,31,31,30,30,31,31,30,30,31,31,31,31,30,30,31,31,30,30,31,31};
int buf[5001][13][32];
#define ISYEAR(X)  X%100 != 0 && X%4==0 || X%400 == 0 ? 1:0
struct Date {
    int day;
    int month;
    int year;

    void nextDay() {
        day++;
        if( day > dayOfMonth[month][ISYEAR(year)]) {
            day = 1;
            month++;
            if( month > 12) {
                month = 1;
                year++;
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    Date tmp;
    tmp.day = 1;
    tmp.month = 1;
    tmp.year = 0;
    int cnt = 0;
    while( tmp.year != 5001) {
        buf[tmp.year][tmp.month][tmp.day] = cnt;
        cnt++;
        tmp.nextDay();
    }
    int y,days;
    while( scanf("%d%d",&y,&days) != EOF) {
        for( int i = 1; i<= 12 ;i++) {
            if( days > dayOfMonth[i][ISYEAR(y)]) {
                days -= dayOfMonth[i][ISYEAR(y)];
            }else {
                printf("%d-%02d-%02d\n",y,i,days);
                break;
            }
        }
    }
    return 0;
}
