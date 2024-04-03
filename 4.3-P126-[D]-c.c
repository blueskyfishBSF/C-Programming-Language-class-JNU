//[D]回答下列问题
//(b)编写函数 power(a, b)，计算a到b的值。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int power(int x,int y)
{
	int c = y - x;
	return c;
}

int main()
{
	int a,b;
	printf("你想要计算两数的步长\n");
	scanf("%d%d", &a,&b);
	printf("%d", power(a,b));
	return 0;
}