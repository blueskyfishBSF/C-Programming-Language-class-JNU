//[D]回答下列问题:
//(a)编写一个函数来计算通过键盘输入的任何整数的阶乘值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int num(int x)
{
    int c = 1;
    while (x > 0)
    {
        c *= x;
        x--;
    }
    return c;
}
int main()
{
	int p;
    printf("你想要阶乘的数字\n");
	scanf("%d", &p);
	printf("%d",num(p));
	return 0;
}
