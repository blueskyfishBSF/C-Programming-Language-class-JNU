//(f)编写一个C函数，将计算sin(x)=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...保留为5位有效数字。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double sin_series(double x) {
    double sum = 0.0;
    int sign = 1;
    for (int i = 1; i <= 7; i += 2) {
        sum += sign * pow(x, i) / factorial(i);
        sign *= -1;
    }
    return sum;
}

int main() {
    double x = 1.0; // Replace with your desired value of x
    double result = sin_series(x);
    printf("sin(%.5f) = %.5f\n", x, result);
    return 0;
}


