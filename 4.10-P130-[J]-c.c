//(c)��дһ���ݹ麯������ȡ쳲��������е�ǰ 25 �����֡�
//��쳲����������У�������������ܺ͸����˵����
//�������Შ�������е�ǰ����:
//1 1 2 3 5 8 13 21 34 55 89...
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �ݹ麯��������쳲��������еĵ�n��
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// ������������ӡ쳲��������е�ǰ25��
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    printf("쳲��������е�ǰ25��������:\n");
    printFibonacciSeries(25);
    return 0;
}
