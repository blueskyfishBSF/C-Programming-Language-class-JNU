//(h)��дһ�����򣬶�ȡ�û������һ����䣬��ɾ�����г��ֵĵ��ʡ�the��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
    char line[1000]; // ����һ�������1000���ַ�
    printf("������һ����䣺\n");
    fgets(line, sizeof(line), stdin); // ��ȡһ���ı�

    const char* delim = " "; // ���ʷָ���
    char* token = strtok(line, delim); // ��ȡ��һ������

    while (token != NULL) {
        if (strcmp(token, "the") != 0) { // ������ʲ���"the"
            printf("%s ", token); // ��ӡ����
        }
        token = strtok(NULL, delim); // ��ȡ��һ������
    }
    printf("\n");
    return 0;
}
