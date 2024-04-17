//(a)从键盘将二十五个数字输入到一个数组中。
//用户通过键盘输入要查找的号码。
//编写一个程序，查找要查找的数字是否存在于数组中，如果存在，则显示它在数组中出现的次数。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int arr[25];
    int target;
    int count = 0;

    // 输入二十五个数字
    printf("请输入二十五个数字：\n");
    for (int i = 0; i < 25; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    // 输入要查找的号码
    printf("请输入要查找的号码：\n");
    scanf("%d", &target);

    // 遍历数组，查找目标号码
    for (int i = 0; i < 25; ++i) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }

    // 显示结果
    if (count > 0)
    {
        printf("数字 %d 存在于数组中，出现了 %d 次。\n", target, count);
    }
    else 
    {
        printf("数字 %d 不存在于数组中。\n", target);
    }

    return 0;
}
