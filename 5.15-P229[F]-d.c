//(d)开发一个程序，从键盘接收月份和年份作为整数，并按以下格式打印日历。
//请注意，根据公历，2006年1月1日是星期一。以此为基础，应该生成日历如下
//         March 2006
//Mon Tue Wed Thu Fri Sat Sun
//        1   2   3   4   5  
//6   7   8   9   10  11  12 
//13  14  15  16  17  18  19 
//20  21  22  23  24  25  26 
//27  28  29  30  31         
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 函数声明
int getDayNumber(int day, int mon, int year);
int getMonthNumber(int mon, int year);
int getYearNumber(int year);
int isLeapYear(int year);
void printCalendar(int mon, int year, int day);

int main() {
    int year, month;

    // 从用户那里获取年份和月份
    printf("请输入年份和月份：");
    scanf("%d %d", &year, &month);

    // 计算该月第一天是星期几
    int day = getDayNumber(1, month, year);

    // 打印日历
    printCalendar(month, year, day);

    return 0;
}

// 根据给定的日期，计算星期数
int getDayNumber(int day, int mon, int year) {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= mon < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[mon - 1] + day) % 7;
}

// 根据给定的月份和年份，返回该月的天数
int getMonthNumber(int mon, int year) {
    if (mon == 2) {
        return (isLeapYear(year) ? 29 : 28);
    }
    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

// 根据给定的年份，判断是否为闰年
int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

// 打印日历
void printCalendar(int mon, int year, int day) {
    printf("         %d年 %d月\n", year, mon);
    printf("日 一 二 三 四 五 六\n");

    // 打印空白日期
    for (int i = 0; i < day; i++) {
        printf("   ");
    }

    int days = getMonthNumber(mon, year);

    // 打印日期
    for (int i = 1; i <= days; i++) {
        printf("%2d ", i);
        if (++day > 6) {
            day = 0;
            printf("\n");
        }
    }
    if (day) {
        printf("\n");
    }
}
