//(e)通过键盘输入正整数。编写一个函数来获取该数字的质因数。
//例如，24 的质因数为 2、2、2和 3，而 35 的质因数为5和7。
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
    printf("请输入一个正整数以获取其质因数：\n");
    scanf("%d", &num);
    printf("质因数为：");
    print_prime_factors(num);
    return 0;
}
