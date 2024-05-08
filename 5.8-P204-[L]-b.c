//(b)编写一个程序，从任意5行5列矩阵中选取最大的数字。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
    int matrix[ROWS][COLS];
    int max = 0;

    // 假设我们已经有了一个5x5的矩阵
    // 这里用随机数填充矩阵
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100; // 生成0到99之间的随机数
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 寻找最大的数字
    max = matrix[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("矩阵中最大的数字是: %d\n", max);

    return 0;
}
