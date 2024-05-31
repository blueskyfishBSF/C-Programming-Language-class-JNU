//(a)д���������� xgets()��xputs()���乤��ԭ�����׼�⺯��gets() �� puts() ���ơ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// xgets ������������ gets
char* xgets(char* str) {
    int c;
    char* ptr = str;

    while ((c = getchar()) != '\n' && c != EOF) {
        *ptr++ = c;
    }
    *ptr = '\0'; // ���ַ���ĩβ��ӿ��ַ�

    return str;
}

// xputs ������������ puts
int xputs(const char* str) {
    while (*str) {
        putchar(*str++);
    }
    putchar('\n'); // �������ĩβ��ӻ��з�

    return 1;
}

int main() {
    char str[100];

    printf("������һЩ�ı���");
    xgets(str); // ʹ�� xgets ������ȡ�ַ���
    printf("��������ı��ǣ�");
    xputs(str); // ʹ�� xputs ��������ַ���

    return 0;
}
