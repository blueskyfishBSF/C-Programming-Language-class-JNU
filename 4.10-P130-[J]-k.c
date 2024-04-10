//(k)编写一个函数来计算由欧几里得算法给出的最大公约数，
//以J = 1980、K = 1617 为例，如下所示:
//1980 / 1617 = 1   1980 - 11617 = 363
//1617 / 363 - 4    363 / 165 - 2
//5 / 33 = 5        1617 - 4363 - 165
//363 - 2165 - 33   165 - 533 = 0
//因此，最大公约数是 33。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 使用欧几里得算法计算最大公约数 (GCD) 的函数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int J = 1980;
    int K = 1617;

    int greatest_common_divisor = gcd(J, K);

    printf("The greatest common divisor of %d and %d is %d.\n", J, K, greatest_common_divisor);

    return 0;
}
