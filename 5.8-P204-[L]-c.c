//(c)编写一个程序来获取 4x4 矩阵的转置。矩阵的转置是通过将每一行的元素与相应列的元素交换来获得的。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    // 假设已经有了一个4x4的矩阵
    // 这里用随机数填充矩阵
    printf("原始矩阵:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 100; // 生成0到99之间的随机数
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 计算转置矩阵
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 打印转置矩阵
    printf("转置矩阵:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
