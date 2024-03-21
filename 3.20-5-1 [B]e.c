#define _CRT_SECURE_NO_WARNINGS 1
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