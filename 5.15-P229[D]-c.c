//(c)��дһ�����򣬴�ָ��λ����ȡ�����ַ�����һ���֡�
//���磬����ַ����ǡ�Working with strings is fun������ô�����λ��4��ʼ��ȡ4���ַ��������Ӧ���ַ�������Ϊ��king����
//���Ҫ��ȡ���ַ���Ϊ0�������Ӧ��ָ��λ����ȡ�����ַ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void extractSubstring(char* source, int position, int length) {
    // ����һ��ָ��ԭʼ�ַ�����ָ��
    char* ptr = source + position;

    // �������Ϊ0�����ӡ��ָ��λ�õ��ַ���ĩβ�Ĳ���
    if (length == 0) {
        printf("��ȡ���ַ���: %s\n", ptr);
    }
    else {
        // ��ӡָ�����ȵ��ַ�
        for (int i = 0; i < length; i++) {
            if (*(ptr + i) == '\0') break; // ��������ַ���ĩβ����ֹͣ
            printf("%c", *(ptr + i));
        }
        printf("\n");
    }
}

int main() {
    char str[] = "Working with strings is fun";
    int position = 4; // �ӵ�5���ַ���ʼ��ȡ��C�������ַ���������0��ʼ��
    int length = 4;   // ��ȡ4���ַ�

    // ���ú���
    extractSubstring(str, position, length);

    return 0;
}
