#define _CRT_SECURE_NO_WARNINGS 1
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