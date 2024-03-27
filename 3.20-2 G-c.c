#define _CRT_SECURE_NO_WARNINGS 1
//(c)某一牌号的钢按下列条件分级:(i)硬度必须大于 50
//(ii)碳含量必须低于 0.7
//(iii)拉伸强度必须大于 5600
//成绩如下 :
//	如果满足所有三个条件，等级为 10
//	如果满足条件(i) 和(ii)，则等级为 9如果满足条件(ii)和(iii)，则等级为 8如果满足条件(i)和(iii)，则等级为 7如果仅满足一个条件，则等级为6
//	如果不满足任何条件，则等级为5
//	编写一个程序，要求用户给出硬度、碳含量和拉伸值所考虑钢材的强度并输出钢材的牌号。
#include <stdio.h>
int main()
{
	float hard = 50;
	float carbon = 0.7;
	float push = 5600;
	float uhard;
	float ucarbon;
	float upush;
	printf("你的钢材：硬度、碳含量、拉伸强度");
	scanf("%f%f%f",&uhard,&ucarbon,&upush);

	if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("10级钢材");
	else if (uhard > 50 && ucarbon < 0.7 && upush<=5600)
		printf("9级钢材");
	else if (uhard <= 50 && ucarbon < 0.7 && upush>5600)
		printf("8级钢材");
	else if (uhard > 50 && ucarbon >= 0.7 && upush>5600)
		printf("7级钢材");
	else if (uhard > 50 && ucarbon < 0.7 && upush>5600)
		printf("6级钢材");
	else
		printf("5级钢材");
	return 0;
}