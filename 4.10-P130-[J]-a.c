//(a)通过键盘输入一个5位正整数，编写一个函数计算该5位数字的位数之和:
//(1)不使用递归
//(2)使用递归
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//不用递归
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
    printf("请输入一个5位的正整数: ");
    scanf("%d", &number);
    printf("该数的各位数字之和为: %d\n", sumDigits(number));
    return 0;
}

//用递归
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
    printf("请输入一个5位的正整数: ");
    scanf("%d", &number);
    printf("该数的各位数字之和为: %d\n", sumDigitsRecursively(number));
    return 0;
}
