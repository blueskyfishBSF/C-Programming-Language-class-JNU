#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��C���Գ����Բ�������Ч��
//��ӡ����ABCDEFGFEDCBA
//��ÿһ�µ�һ�У��ͼ���һ�����м�������������ĸ
//����˵�ڶ���ABCDEF FEDCBA
//������ABCDE   EDCBA
//�Դ�����
//�����
//ABCDEFGFEDCB
//ABCDE  FEDCB
//ABCD    EDCB
//ABC      DCB
//AB        CB
//A          B
#include <stdio.h>

int main() {
    int i, j, k;
    char letters[] = "ABCDEFGFEDCBA";
    int len = sizeof(letters) - 2; // ��ȥ�ַ���������'\0'

    for (i = 0; i < len / 2; i++) 
    {
        // ��ӡǰ�벿��
        for (j = 0; j < len / 2 - i; j++) 
        {
            printf("%c", letters[j]);
        }
        // ��ӡ�м�Ŀո�
        for (k = 0; k < i * 2; k++) 
        {
            printf(" ");
        }
        // ��ӡ��벿��
        for (j = len / 2 + i; j < len; j++)
        {
            printf("%c", letters[j]);
        }
        printf("\n");
    }
    return 0;
}
