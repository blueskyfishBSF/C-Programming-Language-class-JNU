#define _CRT_SECURE_NO_WARNINGS 1
//(e)��дһ�����򣬴�ӡ��1�� 500 ֮������а�ķ˹��������
//���������ÿλ���ֵ������͵��ڸ��������������Ϊ��ķ˹��������
//���磬153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)��
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