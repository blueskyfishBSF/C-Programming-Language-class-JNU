//(b)�� 25 �����ֵļ���ʵ��ѡ������ð������Ͳ��������㷨��(�ο�ͼ8.11Ϊ�㷨�߼�)
//ѡ������ÿһλ�����������������֣����С��ǰ�ƽ�������ͺ��ƽ�����
//ð�����򣺵�N��λ��N+1λ�����ֱȽϣ������ͽ������ظ������ܽ�����
//��������ÿһ��λ���������������飬�ҵ���С�����ַ�����ǰ�档
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ѡ������
void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; ++i) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) 
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // ����Ԫ��
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// ð������
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i) 
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1]) 
            {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ��������
void insertionSort(int arr[], int n) 
{
    for (int i = 1; i < n; ++i) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[25];
    printf("������25�����֣�\n");
    for (int i = 0; i < 25; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    // ѡ������
    selectionSort(arr, 25);
    printf("ѡ����������");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ð������
    bubbleSort(arr, 25);
    printf("ð����������");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ��������
    insertionSort(arr, 25);
    printf("������������");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
