//(b)��дһ�����򣬴�����5��5�о�����ѡȡ�������֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define ROWS 5
#define COLS 5

int main() {
    int matrix[ROWS][COLS];
    int max = 0;

    // ���������Ѿ�����һ��5x5�ľ���
    // �����������������
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100; // ����0��99֮��������
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Ѱ����������
    max = matrix[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    printf("����������������: %d\n", max);

    return 0;
}
