#define _CRT_SECURE_NO_WARNINGS 1
//用C语言编写一个程序，使用for循环生成 1、2和3的所有组合。
//数字组合不能重复，即111、112这种无效
#include <stdio.h>
int main() {
    int i, j, k;
    printf("所有1、2和3的不重复组合如下：\n");
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            for (k = 1; k <= 3; k++)
            {
                if (i != j && i != k && j != k) 
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}

