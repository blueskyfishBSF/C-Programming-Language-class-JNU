//(g)������������x��y��2����дһ�����������ǵ�ֵѭ�����ơ�
//���仰˵�����ѭ����λ��x = 5��y = 8��z = 10ѭ����λ��y = 5��z = 8��x = 10ѭ����λ��y = 5��z = 8��x = 10��
//ʹ�ñ���a���øú�����b��cѭ����λֵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void cyclic_right_shift(int* a, int* b, int* c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 8, z = 10;

    cyclic_right_shift(&x, &y, &z);

    printf("After cyclic right shift:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
