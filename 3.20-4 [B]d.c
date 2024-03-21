#define _CRT_SECURE_NO_WARNINGS 1
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