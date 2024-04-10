//(b)通过键盘输入一个正整数，编写C程序求出该数的质因数。适当修改函数以递归地获得素因数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void printPrimeFactors(int num, int divisor) {
    // 如果除数大于等于num，递归结束
    if (divisor >= num) {
        if (num > 1) printf("%d ", num); // 如果num不为1，则它本身是一个质数
        return;
    }
    else {
        if (num % divisor == 0) {
            printf("%d ", divisor);
            printPrimeFactors(num / divisor, divisor); // 递归调用
        }
        else {
            printPrimeFactors(num, divisor + 1); // 尝试下一个可能的除数
        }
    }
}

int main() {
    int number;
    printf("请输入一个正整数: ");
    scanf("%d", &number);
    printf("该数的质因数有: ");
    printPrimeFactors(number, 2);
    printf("\n");
    return 0;
}
