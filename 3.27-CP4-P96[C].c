#define _CRT_SECURE_NO_WARNINGS 1
//编写一个菜单驱动程序，其中有以下选项:
//1.数字的阶乘
//2.是否素数
//3.奇数或偶数
//4.退出
//一旦选择了菜单项，就应该采取适当的操作，一旦该操作完成，菜单就会重新出现。
//除非用户选择“退出”选项，否则程序应继续运行。
//提示 : 使用无限 while 和 switch 语句。
#include <stdio.h>
int main()
{
	int num;
	printf("your_choice?\n1:数字的阶乘\n2:数字是否素数\n3:数字是奇数偶数\n4:退出\n");
	while (1)
	{
		scanf("%d", &num);
		{
			switch (num)
			{
			case 1:
			{
				printf("数字的阶乘是...\n");
				break;
			}

			case 2:
			{
				printf("数字...素数\n");
				break;
			}
			case 3:
			{
				printf("你的数字是...\n");
				break;
			}
			case 4:
			{
				printf("ok已经退出\n");
				return 0;
			}
			default:
				printf("无效请重新输入\n");
				break;
			}
		}
		
	}
	return 0;
}