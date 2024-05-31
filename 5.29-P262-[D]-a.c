//(a)写出两个函数 xgets()和xputs()，其工作原理与标准库函数gets() 和 puts() 类似。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// xgets 函数，类似于 gets
char* xgets(char* str) {
    int c;
    char* ptr = str;

    while ((c = getchar()) != '\n' && c != EOF) {
        *ptr++ = c;
    }
    *ptr = '\0'; // 在字符串末尾添加空字符

    return str;
}

// xputs 函数，类似于 puts
int xputs(const char* str) {
    while (*str) {
        putchar(*str++);
    }
    putchar('\n'); // 在输出的末尾添加换行符

    return 1;
}

int main() {
    char str[100];

    printf("请输入一些文本：");
    xgets(str); // 使用 xgets 函数读取字符串
    printf("你输入的文本是：");
    xputs(str); // 使用 xputs 函数输出字符串

    return 0;
}
