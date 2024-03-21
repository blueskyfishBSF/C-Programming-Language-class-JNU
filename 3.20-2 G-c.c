#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float hard = 50;
	float carbon = 0.7;
	float push = 5600;
	float uhard;
	float ucarbon;
	float upush;
	printf("ÄãµÄ¸Ö²Ä£ºÓ²¶È¡¢Ì¼º¬Á¿¡¢À­ÉìÇ¿¶È");
	scanf("%f%f%f",&uhard,&ucarbon,&upush);

	if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("10¼¶¸Ö²Ä");
	else if (uhard > 50 && ucarbon < 0.7 && upush<=5600)
		printf("9¼¶¸Ö²Ä");
	else if (uhard <= 50 && ucarbon < 0.7 && upush>5600)
		printf("8¼¶¸Ö²Ä");
	else if (uhard > 50 && ucarbon >= 0.7 && upush>5600)
		printf("7¼¶¸Ö²Ä");
	else if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("6¼¶¸Ö²Ä");
	else
		printf("5¼¶¸Ö²Ä");
	return 0;
}