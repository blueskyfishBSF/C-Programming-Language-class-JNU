#define _CRT_SECURE_NO_WARNINGS 1
//(f)Ϊ��������û�֮���������Ϸ��д����
//��ĳ���Ӧ��ȷ����������ǻ�ʤ��
//��Ϸ��������:
//�� 21 �����
//�����Ҫ�����ѡ�� 1��2��3��4��������
//����ѡ�󣬼����������ѡ��
//˭�����������һ�����˭������
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  
int main()
{
	int stick = 21;
	int ustick = 0;
	int mstick = 0;
	int laststick = stick - ustick - mstick;
	while (stick >= 0)
	{
		printf("your stick?(1-4) \n all stick is %d\n", laststick);
		scanf("%d", &ustick);

		while (ustick < 1 || ustick>4)
		{		
			printf("remake!");
			scanf("%d", &ustick);
		}


		
		{
			printf("your num is %d\n", ustick);

			if (laststick <= 5)
				mstick = laststick - 1;
			else
			{
			srand((unsigned int)time(NULL));
			int random_number = rand() % 4;
			random_number += 1;
			printf("computer num is %d\n", mstick); 
			}

		}
	printf("laststick is %d\n", laststick); 
	}
	printf("you failed!");
	return 0;
}