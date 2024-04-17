//(e)编写一个程序，交换数组的奇数和偶数元素。
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
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 假设这是数组

    int n = sizeof(arr) / sizeof(arr[0]);

    // 交换奇数和偶数元素
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

    // 打印交换后的数组
    printf("交换后的数组：");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
