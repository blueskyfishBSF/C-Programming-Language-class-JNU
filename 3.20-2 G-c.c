#define _CRT_SECURE_NO_WARNINGS 1
//(c)ĳһ�ƺŵĸְ����������ּ�:(i)Ӳ�ȱ������ 50
//(ii)̼����������� 0.7
//(iii)����ǿ�ȱ������ 5600
//�ɼ����� :
//	����������������������ȼ�Ϊ 10
//	�����������(i) ��(ii)����ȼ�Ϊ 9�����������(ii)��(iii)����ȼ�Ϊ 8�����������(i)��(iii)����ȼ�Ϊ 7���������һ����������ȼ�Ϊ6
//	����������κ���������ȼ�Ϊ5
//	��дһ������Ҫ���û�����Ӳ�ȡ�̼����������ֵ�����Ǹֲĵ�ǿ�Ȳ�����ֲĵ��ƺš�
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