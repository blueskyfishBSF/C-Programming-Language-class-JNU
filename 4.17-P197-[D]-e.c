//(e)��дһ�����򣬽��������������ż��Ԫ�ء�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ������������

    int n = sizeof(arr) / sizeof(arr[0]);

    // ����������ż��Ԫ��
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 != 0) 
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] % 2 == 0)
                {
                    swap(&arr[i], &arr[j]);
                    break;
                }
            }
        }
    }

    // ��ӡ�����������
    printf("����������飺");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
