//(b)ͨ����������һ������������дC����������������������ʵ��޸ĺ����Եݹ�ػ����������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printPrimeFactors(int num, int divisor) {
    // ����������ڵ���num���ݹ����
    if (divisor >= num) {
        if (num > 1) printf("%d ", num); // ���num��Ϊ1������������һ������
        return;
    }
    else {
        if (num % divisor == 0) {
            printf("%d ", divisor);
            printPrimeFactors(num / divisor, divisor); // �ݹ����
        }
        else {
            printPrimeFactors(num, divisor + 1); // ������һ�����ܵĳ���
        }
    }
}

int main() {
    int number;
    printf("������һ��������: ");
    scanf("%d", &number);
    printf("��������������: ");
    printPrimeFactors(number, 2);
    printf("\n");
    return 0;
}
