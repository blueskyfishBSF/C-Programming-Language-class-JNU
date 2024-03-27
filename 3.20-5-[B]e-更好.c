#define _CRT_SECURE_NO_WARNINGS 1
//(e)编写一个程序，打印出1到 500 之间的所有阿姆斯特朗数。
//如果该数的每位数字的立方和等于该数本身，则该数称为阿姆斯特朗数。
//例如，153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)。
#include <stdio.h>
int main()
{
	int number, originalNumber, remainder, result = 0;

	printf("1到500之间的阿姆斯特朗数有：\n");
	for (number = 1; number <= 500; number++) {
		originalNumber = number;
		result = 0;

		while (originalNumber != 0) {
			remainder = originalNumber % 10;
			result += remainder * remainder * remainder;
			originalNumber /= 10;
		}

		if (result == number)
			printf("%d \n", number);
	return 0;
}