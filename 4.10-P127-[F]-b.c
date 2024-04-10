//(b)��дһ������������5������
//��������Щ���ֵ��ܺ͡�ƽ��ֵ�ͱ�׼�
//�� main()���ô˺������� main()�д�ӡ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void calculate(int numbers[], int size, double* sum, double* mean, double* stddev)
{
    double sum_val = 0.0, mean_val, stddev_val = 0.0;

    for (int i = 0; i < size; ++i)
    {
        sum_val += numbers[i];
    }

    mean_val = sum_val / size;

    for (int i = 0; i < size; ++i)
    {
        stddev_val += pow(numbers[i] - mean_val, 2);
    }
    stddev_val = sqrt(stddev_val / size);

    *sum = sum_val;
    *mean = mean_val;
    *stddev = stddev_val;
}

int main()
{
    int numbers[5] = { 1, 2, 3, 4, 5 };
    double sum, mean, stddev;

    calculate(numbers, 5, &sum, &mean, &stddev);

    printf("�ܺ�: %f\n", sum);
    printf("ƽ��ֵ: %f\n", mean);
    printf("��׼��: %f\n", stddev);

    return 0;
}
