//(i)编写一个程序，获取一组人的姓名，并用首字母缩写名字、中间名和除姓氏之外的其他名字。(即缩写除了姓氏外的所有部分)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    printf("请输入您的全名（英文姓名）: ");
    fgets(fullName, sizeof(fullName), stdin);

    // 移除字符串末尾的换行符
    fullName[strcspn(fullName, "\n")] = 0;

    // 开始处理字符串
    int i = 0;
    int len = strlen(fullName);
    int lastName = 0; // 姓氏的标志

    // 输出第一个名字的首字母
    if (len > 0 && fullName[0] != ' ') {
        printf("%c.", toupper(fullName[0]));
    }

    // 遍历字符串，找到空格并输出下一个字符作为缩写
    for (i = 1; i < len; i++) {
        // 如果找到空格，并且下一个字符不是空格，且不是姓氏的开始
        if (fullName[i] == ' ' && fullName[i + 1] != ' ' && lastName == 0) {
            printf("%c.", toupper(fullName[i + 1]));
            lastName = 1; // 标记找到姓氏的开始
        }
        else if (fullName[i] == ' ') {
            // 如果再次遇到空格，重置姓氏标志
            lastName = 0;
        }
    }

    printf("\n");
    return 0;
}

