//(g)给定三个变量x、y、2，编写一个函数将它们的值循环右移。
//换句话说，如果循环移位后x = 5、y = 8、z = 10循环移位后y = 5、z = 8、x = 10循环移位后y = 5、z = 8和x = 10。
//使用变量a调用该函数、b、c循环移位值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void cyclic_right_shift(int* a, int* b, int* c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 8, z = 10;

    cyclic_right_shift(&x, &y, &z);

    printf("After cyclic right shift:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
