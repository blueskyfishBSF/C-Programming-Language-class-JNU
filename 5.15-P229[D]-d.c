//(d)编写一个程序，将“124”这样的字符串转换为整数"124"。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "124";
    int num;

    // 使用atoi函数将字符串转换为整数
    num = atoi(str);

    // 输出结果
    printf("字符串 '%s' 转换为整数是: %d\n", str, num);

    return 0;
}
