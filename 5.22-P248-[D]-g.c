//(g)编写一个程序来比较两个给定的日期。
//要存储日期，请使用包含三个成员的结构，即日期、月份和年份。
//如果日期相等，则显示消息为“相等”，否则显示“不相等”
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 定义一个结构体来存储日期
typedef struct {
    int day;
    int month;
    int year;
} Date;

// 函数来比较两个日期
int compareDates(Date d1, Date d2) {
    // 比较年份
    if (d1.year != d2.year) {
        return 0;
    }
    // 比较月份
    if (d1.month != d2.month) {
        return 0;
    }
    // 比较日期
    if (d1.day != d2.day) {
        return 0;
    }
    // 日期相等
    return 1;
}

int main() {
    Date date1, date2;

    // 获取第一个日期
    printf("输入第一个日期 (日 月 年): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // 获取第二个日期
    printf("输入第二个日期 (日 月 年): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // 比较两个日期
    if (compareDates(date1, date2)) {
        printf("日期相等\n");
    }
    else {
        printf("日期不相等\n");
    }

    return 0;
}
