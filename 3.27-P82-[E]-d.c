#define _CRT_SECURE_NO_WARNINGS 1
//��C���Ա�дһ������ʹ��forѭ������ 1��2��3��������ϡ�
//������ϲ����ظ�����111��112������Ч
#include <stdio.h>
int main() {
    int i, j, k;
    printf("����1��2��3�Ĳ��ظ�������£�\n");
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            for (k = 1; k <= 3; k++)
            {
                if (i != j && i != k && j != k) 
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}

