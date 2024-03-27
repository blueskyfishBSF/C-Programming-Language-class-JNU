#define _CRT_SECURE_NO_WARNINGS 1
//根据一项研究，一个人的大致智力水平可以使用以下公式计算:
//i = 2 + (y + 0.5x)
//编写一个C语言程序，生成一个包含i、y和x值的表，其中y从1变化到6，对于每个y值，x从5.5 变化到 12.5，步长为 0.5。
#include <stdio.h>
int main() 
{
    double y, x, i;

    printf("i, y, x 的值如下：\n");
    for (y = 1; y <= 6; y++) 
    {
        for (x = 5.5; x <= 12.5; x += 0.5) 
        {
            i = 2 + (y + 0.5 * x);
            printf("y: %.1f, x: %.1f,i: %.2f\n", y, x, i);
        }
    }
    return 0;
}
