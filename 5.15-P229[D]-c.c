//(c)编写一个程序，从指定位置提取给定字符串的一部分。
//例如，如果字符串是“Working with strings is fun”，那么如果从位置4开始提取4个字符，则程序应将字符串返回为“king”。
//如果要提取的字符数为0，则程序应从指定位置提取整个字符串。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void extractSubstring(char* source, int position, int length) {
    // 定义一个指向原始字符串的指针
    char* ptr = source + position;

    // 如果长度为0，则打印从指定位置到字符串末尾的部分
    if (length == 0) {
        printf("提取的字符串: %s\n", ptr);
    }
    else {
        // 打印指定长度的字符
        for (int i = 0; i < length; i++) {
            if (*(ptr + i) == '\0') break; // 如果到达字符串末尾，则停止
            printf("%c", *(ptr + i));
        }
        printf("\n");
    }
}

int main() {
    char str[] = "Working with strings is fun";
    int position = 4; // 从第5个字符开始提取（C语言中字符串索引从0开始）
    int length = 4;   // 提取4个字符

    // 调用函数
    extractSubstring(str, position, length);

    return 0;
}
