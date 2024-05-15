//(h)编写一个程序，读取用户输入的一行语句，并删除所有出现的单词“the”
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
    char line[1000]; // 假设一行最多有1000个字符
    printf("请输入一行语句：\n");
    fgets(line, sizeof(line), stdin); // 读取一行文本

    const char* delim = " "; // 单词分隔符
    char* token = strtok(line, delim); // 获取第一个单词

    while (token != NULL) {
        if (strcmp(token, "the") != 0) { // 如果单词不是"the"
            printf("%s ", token); // 打印单词
        }
        token = strtok(NULL, delim); // 获取下一个单词
    }
    printf("\n");
    return 0;
}
