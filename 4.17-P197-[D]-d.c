//(d)从键盘将二十五个数字输入到一个数组中。
// 编写一个程序，找出其中有多少个是正数，有多少个是负数，有多少个是偶数，有多少个是奇数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int numbers[25];
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;

    printf("请输入二十五个数字：\n");
    for (int i = 0; i < 25; ++i)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) 
        {
            positiveCount++;
        }
        else if (numbers[i] < 0) 
        {
            negativeCount++;
        }
        if (numbers[i] % 2 == 0) 
        {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    printf("正数的个数：%d\n", positiveCount);
    printf("负数的个数：%d\n", negativeCount);
    printf("偶数的个数：%d\n", evenCount);
    printf("奇数的个数：%d\n", oddCount);

    return 0;
}
