//(i)编写一个程序，获取一组人的姓名，并用首字母缩写名字、中间名和除姓氏之外的其他名字。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    printf("请输入您的全名（名字 中间名 姓氏）: ");
    fgets(fullName, sizeof(fullName), stdin);

    // 移除换行符
    fullName[strcspn(fullName, "\n")] = 0;

    // 提取并打印首字母缩写
    char* token = strtok(fullName, " ");
    int count = 0;
    while (token != NULL) {
        if (count < 2) { // 假设最后一个单词是姓氏
            printf("%c", toupper(token[0]));
        }
        token = strtok(NULL, " ");
        count++;
    }
    printf("\n");
    return 0;
}
