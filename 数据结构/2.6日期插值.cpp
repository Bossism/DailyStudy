#include<stdio.h>

#define  ISYEAP(x) x%100 != 0 && x%4 == 0 || x%400 == 0 ? 1:0

int dayofMonth[13][2] = {0,0,31,31,28,29,31,31,30,30,
31,31,30,30,31,31,31,31,30,30,31,31,30,30,31,31,};

struct Date
{
    int day;
    int month;
    int year;
    void nextDay() {
        day++;
        if( day > dayofMonth[month][ ISYEAP(year) ]) {
            day = 1;
            month++;
            if( month > 12) {
                month = 1;
                year ++;
            }
        }
    }
};

int buf[5002][13][32]; // 保留预处理的天数
int Abs(int x) {
    return x < 0? -x: x;
}
int main(int argc, char const *argv[])
{
    Date tmp;
    int cnt = 0;  //天数计数
    tmp.day = 1;
    tmp.month = 1;
    tmp.year = 0;    // 初始化日期类对象为0年1月1日
    while( tmp.year != 5001)  { //日期不超过5000年
        buf[tmp.year][tmp.month][tmp.day] = cnt; 
        // 将该日与0年1月1号的天数差保存起来
        tmp.nextDay();
        cnt++;
    }
    int d1,m1,y1;
    int d2,m2,y2;
    while ( scanf("%4d%2d%2d",&y1,&m1,&d1) != EOF) {
        scanf( "%4d%2d%2d",&y2,&m2,&d2);
        printf("%d\n",Abs(buf[y2][m2][d2] - buf[y1][m1][d1]));
    }
    return 0;
}
