//(e)��дһ���ݹ�C���Ժ�������ȡǰ 25 ����Ȼ�������к͡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �ݹ麯��������ǰn����Ȼ���ĺ�
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1; // �������
    }
    else {
        return n + sumOfNaturalNumbers(n - 1); // �ݹ鲽��
    }
}

int main() {
    int sum = sumOfNaturalNumbers(25); // ����ǰ25����Ȼ���ĺ�
    printf("ǰ25����Ȼ���ĺ�Ϊ: %d\n", sum);
    return 0;
}
