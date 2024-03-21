#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int p, n;
	float r, si;

	p = 1000;
	n = 3;
	r = 8.5;
	/*formula for simple interest*/
	si = p * n * r / 100;

	printf("%f", si);
	system("pause");
}