//(d)��дһ�����򣬽���124���������ַ���ת��Ϊ����"124"��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "124";
    int num;

    // ʹ��atoi�������ַ���ת��Ϊ����
    num = atoi(str);

    // ������
    printf("�ַ��� '%s' ת��Ϊ������: %d\n", str, num);

    return 0;
}
