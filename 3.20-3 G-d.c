#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int uday;
	printf("��ٽ�������?");
	scanf("%d",&uday);

	if (0 <= uday&&uday <= 5)
		printf("����50����");
	else if (6<= uday&&uday <= 10)
		printf("����1¬��");
	else if(10 <= uday&&uday <= 30)
		printf("����5¬��");
	else if (30< uday)
		printf("ȡ����Ա�ʸ�");
	return 0;
}