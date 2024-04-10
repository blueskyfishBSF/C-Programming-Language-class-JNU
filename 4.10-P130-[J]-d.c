//(d)通过键盘输入一个正整数，编写一个C函数，使用递归找到该数字的二进制等值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printBinary(unsigned int num) {
    if (num > 1) {
        printBinary(num / 2); // 递归调用
    }
    printf("%d", num % 2);
}

int main() {
    unsigned int number;
    printf("请输入一个正整数: ");
    scanf("%u", &number);
    printf("该数的二进制等值为: ");
    printBinary(number);
    printf("\n");
    return 0;
}
