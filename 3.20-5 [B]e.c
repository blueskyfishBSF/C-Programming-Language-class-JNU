#define _CRT_SECURE_NO_WARNINGS 1
//(e)编写一个程序，打印出1到 500 之间的所有阿姆斯特朗数。
//如果该数的每位数字的立方和等于该数本身，则该数称为阿姆斯特朗数。
//例如，153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)。
#include <stdio.h>
int main()
{

	int number, result = 0;
	int baiwei, shiwei, gewei = 0;
	for (number = 1; number <= 500; number++)
	{
		int baiwei, shiwei, gewei = 0;
		baiwei = number / 100;
		shiwei = number / 10;
		gewei = number / 1;
		if (baiwei* baiwei* baiwei + shiwei * shiwei * shiwei + gewei * gewei * gewei == number)
		{
			result = number;
			printf("apolo=%d", result);
		}
	}

	}
	return 0;
}