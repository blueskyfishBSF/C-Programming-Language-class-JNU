//(e)ͨ��������������������дһ����������ȡ�����ֵ���������
//���磬24 ��������Ϊ 2��2��2�� 3���� 35 ��������Ϊ5��7��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print_prime_factors(int x) {
    int factor = 2;
    while (x > 1)
    {
        while (x % factor == 0) 
        {
            printf("%d ", factor);
            x /= factor;
        }
        factor++;
    }
    printf("\n");
}

int main() {
    int num;
    printf("������һ���������Ի�ȡ����������\n");
    scanf("%d", &num);
    printf("������Ϊ��");
    print_prime_factors(num);
    return 0;
}
