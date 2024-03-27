#define _CRT_SECURE_NO_WARNINGS 1
//使用 switch 为学生查找减免分数。
//用户应输入学生获得的班级以及他未通过的科目数。
//使用以下逻辑 :
//如果学生获得了第一名并且他不及格的科目数量大于3，那么他不会得到任何宽限。
//如果他不及格的科目数小于或等于3，则每科减免5分。
//如果学生获得二等，并且他不及格的科目数量大于2，那么他不会得到任何宽限。
//如果他不及格的科目数小于或等于2，则每科减免4分。
//如果学生获得三等，并且他不及格的科目数量大于1，那么他不会得到任何宽限。
//如果他不及格的科目数等于1，则每科减免5分。
#include <stdio.h>
int main()
{
	int num, dead,price;
	printf("你的名次？\n");
	scanf("%d", &num);
	printf("你挂了几科？\n");
	scanf("%d", &dead);
	switch (num)
	{
	case 1:
	{
		if (dead > 3)
			price = 0;
		if (dead <= 3)
			price = (+5) * dead;
		break;
	}
	case 2:
	{
		if (dead > 2)
			price = 0;
		if (dead <= 2)
			price = (+4) * dead;
		break;
	}
	case 3:
	{
		if (dead > 1)
			price = 0;
		if (dead ==1 )
			price = (-5) * dead;
		break;
	}
	default:
		printf("错误");
		break;
	}
	printf("你的优惠减免分数为\n%d", price);
	return 0;
}