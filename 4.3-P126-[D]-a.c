//[D]�ش���������:
//(a)��дһ������������ͨ������������κ������Ľ׳�ֵ��
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
    printf("����Ҫ�׳˵�����\n");
	scanf("%d", &p);
	printf("%d",num(p));
	return 0;
}
