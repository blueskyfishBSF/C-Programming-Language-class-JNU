//(f)编写一个C函数，将计算sin(x)=x-(x/3!)+(x/5!)-(x/7!)+...保留为5位有效数字。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double calculate_sin(double x) {
    double result = 0.0;
    double term = x;
    double factorial = 1.0;
    int sign = 1;
    int n = 1;

    while (fabs(term) >= 1e-5) {
        result += sign * term;
        n += 2;
        factorial *= n * (n - 1);
        term = pow(x, n) / factorial;
        sign *= -1;
    }

    return result;
}

int main() {
    double x = 1.0; // Replace with your desired value of x
    double sin_x = calculate_sin(x);
    printf("sin(%.5f) = %.5f\n", x, sin_x);
    return 0;
}

