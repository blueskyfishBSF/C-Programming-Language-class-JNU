//(i)��дһ�����򣬻�ȡһ���˵���������������ĸ��д���֡��м����ͳ�����֮����������֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    printf("����������ȫ�������� �м��� ���ϣ�: ");
    fgets(fullName, sizeof(fullName), stdin);

    // �Ƴ����з�
    fullName[strcspn(fullName, "\n")] = 0;

    // ��ȡ����ӡ����ĸ��д
    char* token = strtok(fullName, " ");
    int count = 0;
    while (token != NULL) {
        if (count < 2) { // �������һ������������
            printf("%c", toupper(token[0]));
        }
        token = strtok(NULL, " ");
        count++;
    }
    printf("\n");
    return 0;
}
