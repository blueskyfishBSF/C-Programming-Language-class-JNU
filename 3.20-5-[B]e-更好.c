#define _CRT_SECURE_NO_WARNINGS 1
//(e)��дһ�����򣬴�ӡ��1�� 500 ֮������а�ķ˹��������
//���������ÿλ���ֵ������͵��ڸ��������������Ϊ��ķ˹��������
//���磬153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)��
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