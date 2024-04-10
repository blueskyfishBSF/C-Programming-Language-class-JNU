//(h)编写一个函数来查找给定十进制整数的二进制等效值并显示它。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void decimal_to_binary(int decimal) {
    int binary[32]; // 假设 32 位整数
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
    int decimal_number = 42; // 设置你想要的小数
    decimal_to_binary(decimal_number);

    return 0;
}
