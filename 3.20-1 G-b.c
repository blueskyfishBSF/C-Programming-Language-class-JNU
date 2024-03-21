#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char num;
	printf("请输入你的字符");
	scanf("%c", &num);

	if (num >= 'A' && num <= 'Z')
		printf("‘%c’,是大写字母\n",num);
	else if (num>='a'&&num<='z')
		printf("‘%c’,是小写字母\n",num);
	else if (num >= '0' && num <= '9')
			printf("‘%c’,是数字\n",num);
	else
			printf("‘%c’,是特殊字符\n",num);
	return 0;
}