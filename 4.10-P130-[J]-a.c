//(a)ͨ����������һ��5λ����������дһ�����������5λ���ֵ�λ��֮��:
//(1)��ʹ�õݹ�
//(2)ʹ�õݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���õݹ�
int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("������һ��5λ��������: ");
    scanf("%d", &number);
    printf("�����ĸ�λ����֮��Ϊ: %d\n", sumDigits(number));
    return 0;
}

//�õݹ�
#include <stdio.h>
int sumDigitsRecursively(int num) {
    if (num == 0) {
        return 0;
    }
    else {
        return (num % 10) + sumDigitsRecursively(num / 10);
    }
}

int main() {
    int number;
    printf("������һ��5λ��������: ");
    scanf("%d", &number);
    printf("�����ĸ�λ����֮��Ϊ: %d\n", sumDigitsRecursively(number));
    return 0;
}
