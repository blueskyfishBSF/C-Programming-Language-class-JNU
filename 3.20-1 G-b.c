#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char num;
	printf("����������ַ�");
	scanf("%c", &num);

	if (num >= 'A' && num <= 'Z')
		printf("��%c��,�Ǵ�д��ĸ\n",num);
	else if (num>='a'&&num<='z')
		printf("��%c��,��Сд��ĸ\n",num);
	else if (num >= '0' && num <= '9')
			printf("��%c��,������\n",num);
	else
			printf("��%c��,�������ַ�\n",num);
	return 0;
}