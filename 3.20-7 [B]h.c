#define _CRT_SECURE_NO_WARNINGS 1
//(h)编写一个程序来接收一个整数并找到它的八进制等值。
#include <stdio.h>  
int main() {
    int num;
    int a, b = 0;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    a = num / 8;
    b = num % 8;
    printf("该整数的八进制表示为: ");
    printf("%d%d",a,b);

    return 0;
}