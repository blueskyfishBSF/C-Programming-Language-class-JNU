#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number, originalNumber, remainder, result = 0;

	printf("1��500֮��İ�ķ˹�������У�\n");
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