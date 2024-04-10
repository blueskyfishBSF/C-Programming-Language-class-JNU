//(b)编写一个函数，接收5个整数
//并返回这些数字的总和、平均值和标准差。
//从 main()调用此函数并在 main()中打印结果。
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

    printf("总和: %f\n", sum);
    printf("平均值: %f\n", mean);
    printf("标准差: %f\n", stddev);

    return 0;
}
