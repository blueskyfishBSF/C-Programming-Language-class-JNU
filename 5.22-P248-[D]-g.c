//(g)��дһ���������Ƚ��������������ڡ�
//Ҫ�洢���ڣ���ʹ�ð���������Ա�Ľṹ�������ڡ��·ݺ���ݡ�
//���������ȣ�����ʾ��ϢΪ����ȡ���������ʾ������ȡ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����һ���ṹ�����洢����
typedef struct {
    int day;
    int month;
    int year;
} Date;

// �������Ƚ���������
int compareDates(Date d1, Date d2) {
    // �Ƚ����
    if (d1.year != d2.year) {
        return 0;
    }
    // �Ƚ��·�
    if (d1.month != d2.month) {
        return 0;
    }
    // �Ƚ�����
    if (d1.day != d2.day) {
        return 0;
    }
    // �������
    return 1;
}

int main() {
    Date date1, date2;

    // ��ȡ��һ������
    printf("�����һ������ (�� �� ��): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // ��ȡ�ڶ�������
    printf("����ڶ������� (�� �� ��): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // �Ƚ���������
    if (compareDates(date1, date2)) {
        printf("�������\n");
    }
    else {
        printf("���ڲ����\n");
    }

    return 0;
}
