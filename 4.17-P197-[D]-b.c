//(b)对 25 个数字的集合实现选择排序、冒泡排序和插入排序算法。(参考图8.11为算法逻辑)
//选择排序：每一位置数遍历其它的数字，如果小就前移交换，大就后移交换。
//冒泡排序：第N号位和N+1位的数字比较，如果大就交换，重复到不能交换。
//插入排序：每一个位置数遍历所有数组，找到最小的数字放在它前面。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 选择排序
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
        // 交换元素
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// 冒泡排序
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i) 
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1]) 
            {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 插入排序
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
    printf("请输入25个数字：\n");
    for (int i = 0; i < 25; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    // 选择排序
    selectionSort(arr, 25);
    printf("选择排序结果：");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 冒泡排序
    bubbleSort(arr, 25);
    printf("冒泡排序结果：");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 插入排序
    insertionSort(arr, 25);
    printf("插入排序结果：");
    for (int i = 0; i < 25; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
