//(d)ͨ����������һ������������дһ��C������ʹ�õݹ��ҵ������ֵĶ����Ƶ�ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printBinary(unsigned int num) {
    if (num > 1) {
        printBinary(num / 2); // �ݹ����
    }
    printf("%d", num % 2);
}

int main() {
    unsigned int number;
    printf("������һ��������: ");
    scanf("%u", &number);
    printf("�����Ķ����Ƶ�ֵΪ: ");
    printBinary(number);
    printf("\n");
    return 0;
}
