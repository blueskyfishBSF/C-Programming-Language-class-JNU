//(i)如果三角形的边长分别用 a、b和c表示，则三角形的面积：
//面积 = 根号下的S(S - a)(S - b)(S - c)
//其中，S = (a + b + c) / 2。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double calculate_triangle_area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double a, b, c;
    printf("Enter the lengths of the triangle sides (a, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double triangle_area = calculate_triangle_area(a, b, c);
    printf("Triangle area: %.5f\n", triangle_area);

    return 0;
}
