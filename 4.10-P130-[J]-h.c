//(h)��дһ�����������Ҹ���ʮ���������Ķ����Ƶ�Чֵ����ʾ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void decimal_to_binary(int decimal) {
    int binary[32]; // ���� 32 λ����
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal_number = 42; // ��������Ҫ��С��
    decimal_to_binary(decimal_number);

    return 0;
}
