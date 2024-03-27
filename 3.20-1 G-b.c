#define _CRT_SECURE_NO_WARNINGS 1
//(b)通过键盘输入任意字符，编写程序判断输入的字符是大写字母、小写字母、数字还是特殊符号。
//下表显示了各种字符的 ASCII 值的范围。
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