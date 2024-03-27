#define _CRT_SECURE_NO_WARNINGS 1
//(f)为计算机和用户之间玩火柴棒游戏编写程序。
//你的程序应该确保计算机总是获胜。
//游戏规则如下:
//有 21 根火柴。
//计算机要求玩家选择 1、2、3或4根火柴棍。
//人挑选后，计算机进行挑选。
//谁被迫拿起最后一根火柴，谁就输了
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