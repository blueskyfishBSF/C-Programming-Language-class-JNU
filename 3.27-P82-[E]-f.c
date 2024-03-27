#define _CRT_SECURE_NO_WARNINGS 1
//编写一个C语言程序以产生以下效果
//打印多行ABCDEFGFEDCBA
//但每一新的一行，就减少一个从中间往两边数的字母
//比如说第二行ABCDEF FEDCBA
//第三行ABCDE   EDCBA
//以此类推
//结果：
//ABCDEFGFEDCB
//ABCDE  FEDCB
//ABCD    EDCB
//ABC      DCB
//AB        CB
//A          B
#include <stdio.h>

int main() {
    int i, j, k;
    char letters[] = "ABCDEFGFEDCBA";
    int len = sizeof(letters) - 2; // 减去字符串结束符'\0'

    for (i = 0; i < len / 2; i++) 
    {
        // 打印前半部分
        for (j = 0; j < len / 2 - i; j++) 
        {
            printf("%c", letters[j]);
        }
        // 打印中间的空格
        for (k = 0; k < i * 2; k++) 
        {
            printf(" ");
        }
        // 打印后半部分
        for (j = len / 2 + i; j < len; j++)
        {
            printf("%c", letters[j]);
        }
        printf("\n");
    }
    return 0;
}
