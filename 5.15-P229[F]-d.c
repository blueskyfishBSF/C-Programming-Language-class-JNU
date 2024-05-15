//(d)����һ�����򣬴Ӽ��̽����·ݺ������Ϊ�������������¸�ʽ��ӡ������
//��ע�⣬���ݹ�����2006��1��1��������һ���Դ�Ϊ������Ӧ��������������
//         March 2006
//Mon Tue Wed Thu Fri Sat Sun
//        1   2   3   4   5  
//6   7   8   9   10  11  12 
//13  14  15  16  17  18  19 
//20  21  22  23  24  25  26 
//27  28  29  30  31         
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������
int getDayNumber(int day, int mon, int year);
int getMonthNumber(int mon, int year);
int getYearNumber(int year);
int isLeapYear(int year);
void printCalendar(int mon, int year, int day);

int main() {
    int year, month;

    // ���û������ȡ��ݺ��·�
    printf("��������ݺ��·ݣ�");
    scanf("%d %d", &year, &month);

    // ������µ�һ�������ڼ�
    int day = getDayNumber(1, month, year);

    // ��ӡ����
    printCalendar(month, year, day);

    return 0;
}

// ���ݸ��������ڣ�����������
int getDayNumber(int day, int mon, int year) {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= mon < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[mon - 1] + day) % 7;
}

// ���ݸ������·ݺ���ݣ����ظ��µ�����
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

// ���ݸ�������ݣ��ж��Ƿ�Ϊ����
int isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

// ��ӡ����
void printCalendar(int mon, int year, int day) {
    printf("         %d�� %d��\n", year, mon);
    printf("�� һ �� �� �� �� ��\n");

    // ��ӡ�հ�����
    for (int i = 0; i < day; i++) {
        printf("   ");
    }

    int days = getMonthNumber(mon, year);

    // ��ӡ����
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
