//(c)��дһ����������ȡ 4x4 �����ת�á������ת����ͨ����ÿһ�е�Ԫ������Ӧ�е�Ԫ�ؽ�������õġ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    // �����Ѿ�����һ��4x4�ľ���
    // �����������������
    printf("ԭʼ����:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 100; // ����0��99֮��������
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // ����ת�þ���
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // ��ӡת�þ���
    printf("ת�þ���:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
