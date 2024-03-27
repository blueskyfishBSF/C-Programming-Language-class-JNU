#define _CRT_SECURE_NO_WARNINGS 1
//编写一个菜单驱动程序，其中有以下选项:
//1.数字的阶乘
//2.是否素数
//3.奇数或偶数
//4.退出
//一旦选择了菜单项，就应该采取适当的操作，一旦该操作完成，菜单就会重新出现。
//除非用户选择“退出”选项，否则程序应继续运行。
//提示 : 使用无限 while 和 switch 语句。
#include <stdio.h>
// 函数声明
long factorial(int n);
int isPrime(int num);
void checkOddEven(int num);

int main() {
    int choice, num;

    while (1) {
        printf("\n选择一个选项:\n");
        printf("1. 数字的阶乘\n");
        printf("2. 是否为质数\n");
        printf("3. 奇数或偶数\n");
        printf("4. 退出\n");
        printf("输入您的选择: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("输入一个数字: ");
            scanf("%d", &num);
            printf("%d 的阶乘是: %ld\n", num, factorial(num));
            break;
        case 2:
            printf("输入一个数字: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d 是一个质数。\n", num);
            else
                printf("%d 不是一个质数。\n", num);
            break;
        case 3:
            printf("输入一个数字: ");
            scanf("%d", &num);
            checkOddEven(num);
            break;
        case 4:
            printf("程序退出。\n");
            return 0;
        default:
            printf("无效的选择，请重新输入。\n");
        }
    }
    return 0;
}

// 计算阶乘的函数
long factorial(int n) {
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

// 检查是否为质数的函数
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// 检查奇数或偶数的函数
void checkOddEven(int num) {
    if (num % 2 == 0)
        printf("%d 是偶数。\n", num);
    else
        printf("%d 是奇数。\n", num);
}
