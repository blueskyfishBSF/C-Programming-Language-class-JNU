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
	printf("��ĸֲģ�Ӳ�ȡ�̼����������ǿ��");
	scanf("%f%f%f",&uhard,&ucarbon,&upush);

	if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("10���ֲ�");
	else if (uhard > 50 && ucarbon < 0.7 && upush<=5600)
		printf("9���ֲ�");
	else if (uhard <= 50 && ucarbon < 0.7 && upush>5600)
		printf("8���ֲ�");
	else if (uhard > 50 && ucarbon >= 0.7 && upush>5600)
		printf("7���ֲ�");
	else if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("6���ֲ�");
	else
		printf("5���ֲ�");
	return 0;
}