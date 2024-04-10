//(c)编写一个递归函数来获取斐波那契数列的前 25 个数字。
//在斐波那契数列中，两个连续项的总和给出了第三项。
//以下是裴波那契数列的前几项:
//1 1 2 3 5 8 13 21 34 55 89...
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 递归函数来计算斐波那契数列的第n项
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// 辅助函数来打印斐波那契数列的前25项
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    printf("斐波那契数列的前25个数字是:\n");
    printFibonacciSeries(25);
    return 0;
}
