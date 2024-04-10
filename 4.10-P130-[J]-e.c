//(e)编写一个递归C语言函数来获取前 25 个自然数的运行和。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 递归函数来计算前n个自然数的和
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1; // 基本情况
    }
    else {
        return n + sumOfNaturalNumbers(n - 1); // 递归步骤
    }
}

int main() {
    int sum = sumOfNaturalNumbers(25); // 计算前25个自然数的和
    printf("前25个自然数的和为: %d\n", sum);
    return 0;
}
