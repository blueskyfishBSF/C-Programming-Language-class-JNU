#define _CRT_SECURE_NO_WARNINGS 1
//编写一个程序，使用for循环添加以下系列的前七项!
//(1/1!)+(2/2!)+(3/3!)+...
#include <stdio.h>
int main()
{
	int fenmu = 0, i_2, num_2 = 1;
	float i = 0,num=0, result=0;
	for (i = 1; i <= 7; i++)
	{
		i_2 = i;
		if (i_2 > 0)
		{
			num_2 *= i_2;
			i_2--;
			fenmu = num_2;
		}
		num = i / (fenmu);
		result += num;
	}
	printf("result=%f\n", result);
	return 0;
}