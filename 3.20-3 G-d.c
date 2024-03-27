#define _CRT_SECURE_NO_WARNINGS 1
//(d)图书馆对每本迟交的书收取罚款。
//前5天罚款为50 派萨，6 - 10 天罚款为 1卢比，超过 10 天罚款为5卢比。
//如果您在 30天后归还该书，您的会员资格将被取消。
//编写一个程序来接受会员迟到还书的天数并显示罚款或适当的消息。
#include <stdio.h>
int main()
{
	int uday;
	printf("你迟交多少天?");
	scanf("%d",&uday);

	if (0 <= uday&&uday <= 5)
		printf("罚款50派萨");
	else if (6<= uday&&uday <= 10)
		printf("罚款1卢比");
	else if(10 <= uday&&uday <= 30)
		printf("罚款5卢比");
	else if (30< uday)
		printf("取消会员资格");
	return 0;
}