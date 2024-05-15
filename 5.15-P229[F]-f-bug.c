//(f)�ʵ��޸����������Ա�һ���ض��·ݺ���ݵ�������ʾ����Ļ��
//���û������ܹ�ʹ�ü�ͷ�������·�ʽ��������:
//���ϼ�ͷ��:�����ͬ��
//���¼�ͷ��:ȥ���ͬ��
//�Ҽ�ͷ��:ͬ����¸���
//���ͷ��:ͬ����ϸ���
//��������˳�������ù���Ӧ��ֹͣ��
//��ʾ:ʹ��getkey()������
	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>

// ��������
int getDayNumber(int day, int mon, int year);
int getMonthNumber(int mon, int year);
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

    char ch;
    do {
        ch = getch(); // ��ȡ�û�����
        switch (ch) {
        case 72: // ���ϼ�ͷ��
            year++;
            break;
        case 80: // ���¼�ͷ��
            year--;
            break;
        case 77: // �Ҽ�ͷ��
            if (month == 12) {
                month = 1;
                year++;
            }
            else {
                month++;
            }
            break;
        case 75: // ���ͷ��
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
        if (ch == 27) { // ��������˳���(ESC)
            break;
        }

        // ���¼�����µ�һ�������ڼ�
        day = getDayNumber(1, month, year);
        // ���´�ӡ����
        system("cls"); // ����
        printCalendar(month, year, day);

    } while (ch != 27); // �����˳��������ѭ��

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

