#define _CRT_SECURE_NO_WARNINGS 1
//����һ���о���һ���˵Ĵ�������ˮƽ����ʹ�����¹�ʽ����:
//i = 2 + (y + 0.5x)
//��дһ��C���Գ�������һ������i��y��xֵ�ı�����y��1�仯��6������ÿ��yֵ��x��5.5 �仯�� 12.5������Ϊ 0.5��
#include <stdio.h>
int main() 
{
    double y, x, i;

    printf("i, y, x ��ֵ���£�\n");
    for (y = 1; y <= 6; y++) 
    {
        for (x = 5.5; x <= 12.5; x += 0.5) 
        {
            i = 2 + (y + 0.5 * x);
            printf("y: %.1f, x: %.1f,i: %.2f\n", y, x, i);
        }
    }
    return 0;
}
