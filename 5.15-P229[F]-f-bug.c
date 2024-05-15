//(f)适当修改上述程序，以便一旦特定月份和年份的日历显示在屏幕上
//则用户必须能够使用箭头键按以下方式更改日历:
//向上箭头键:明年的同月
//向下箭头键:去年的同月
//右箭头键:同年的下个月
//左箭头键:同年的上个月
//如果按下退出键，则该过程应该停止。
//提示:使用getkey()函数。
	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>

// 函数声明
int getDayNumber(int day, int mon, int year);
int getMonthNumber(int mon, int year);
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

    char ch;
    do {
        ch = getch(); // 获取用户输入
        switch (ch) {
        case 72: // 向上箭头键
            year++;
            break;
        case 80: // 向下箭头键
            year--;
            break;
        case 77: // 右箭头键
            if (month == 12) {
                month = 1;
                year++;
            }
            else {
                month++;
            }
            break;
        case 75: // 左箭头键
            if (month == 1) {
                month = 12;
                year--;
            }
            else {
                month--;
            }
            break;
        default:
            break;
        }
        if (ch == 27) { // 如果按下退出键(ESC)
            break;
        }

        // 重新计算该月第一天是星期几
        day = getDayNumber(1, month, year);
        // 重新打印日历
        system("cls"); // 清屏
        printCalendar(month, year, day);

    } while (ch != 27); // 按下退出键则结束循环

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

