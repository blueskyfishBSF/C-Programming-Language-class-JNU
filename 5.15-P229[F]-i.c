//(i)��дһ�����򣬻�ȡһ���˵���������������ĸ��д���֡��м����ͳ�����֮����������֡�(����д��������������в���)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char fullName[100];
    printf("����������ȫ����Ӣ��������: ");
    fgets(fullName, sizeof(fullName), stdin);

    // �Ƴ��ַ���ĩβ�Ļ��з�
    fullName[strcspn(fullName, "\n")] = 0;

    // ��ʼ�����ַ���
    int i = 0;
    int len = strlen(fullName);
    int lastName = 0; // ���ϵı�־

    // �����һ�����ֵ�����ĸ
    if (len > 0 && fullName[0] != ' ') {
        printf("%c.", toupper(fullName[0]));
    }

    // �����ַ������ҵ��ո������һ���ַ���Ϊ��д
    for (i = 1; i < len; i++) {
        // ����ҵ��ո񣬲�����һ���ַ����ǿո��Ҳ������ϵĿ�ʼ
        if (fullName[i] == ' ' && fullName[i + 1] != ' ' && lastName == 0) {
            printf("%c.", toupper(fullName[i + 1]));
            lastName = 1; // ����ҵ����ϵĿ�ʼ
        }
        else if (fullName[i] == ' ') {
            // ����ٴ������ո��������ϱ�־
            lastName = 0;
        }
    }

    printf("\n");
    return 0;
}

