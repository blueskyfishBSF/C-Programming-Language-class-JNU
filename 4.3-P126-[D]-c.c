//[D]�ش���������
//(b)��д���� power(a, b)������a��b��ֵ��
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
	printf("����Ҫ���������Ĳ���\n");
	scanf("%d%d", &a,&b);
	printf("%d", power(a,b));
	return 0;
}