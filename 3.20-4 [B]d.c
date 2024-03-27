#define _CRT_SECURE_NO_WARNINGS 1
//(d)编写一个程序，使用 while 循环打印所有 ASCII值及其等效字符。 
//ASCII 值在0到 255 之间变化。
#include <stdio.h>
int main()
{
	unsigned char ascii = 0;
	printf("ASCII and number");
	while (ascii<=254)
	{
		printf("%d\t%c\n", ascii, ascii);
		ascii= ascii+1;
	}
	printf("%d\t%c\n", ascii, ascii);
	return 0;
}