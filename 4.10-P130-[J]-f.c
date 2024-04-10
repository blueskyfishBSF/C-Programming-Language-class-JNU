//(f)编写一个C函数，将级数 sin(x) = x(x * *23 / 3!) + (x * *2 / 5!) - (x / 7!) + A计算为5 位有效数字。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double my_sin(double x) {
    double term = x;
    double result = term;
    double factorial = 1.0;
    int n = 1;

    while (fabs(term) > 1e-5) {
        n += 2;
        factorial *= (n - 1) * n;
        term *= -x * x / factorial;
        result += term;
    }

    return result;
}

int main() {
    double x = 1.0; // 设定 x
    double A = 0.0; // 设定 A
    double sin_x = my_sin(x) + A;

    printf("sin(%.5f) = %.5f\n", x, sin_x);
    return 0;
}
