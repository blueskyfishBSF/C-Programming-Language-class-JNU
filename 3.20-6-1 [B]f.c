#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  

// 函数声明  
int computerPlay(int sticksLeft);

int main() {
    int sticks = 21; // 游戏开始时的火柴数  
    int playerChoice;
    int computerChoice;

    printf("火柴棒游戏开始！共有21根火柴。\n");
    printf("玩家每次可以选择拿1到4根火柴。\n");

    while (sticks > 0) {
        // 玩家做出选择  
        printf("当前剩余火柴数：%d\n", sticks);
        printf("请玩家选择拿多少根火柴（1-4）：");
        scanf("%d", &playerChoice);

        // 检查玩家输入是否合法  
        while (playerChoice < 1 || playerChoice > 4) {
            printf("输入不合法，请重新输入（1-4）：");
            scanf("%d", &playerChoice);
        }

        // 玩家拿取火柴  
        sticks -= playerChoice;

        // 计算机做出选择  
        computerChoice = computerPlay(sticks);
        sticks -= computerChoice;

        // 打印当前剩余火柴数  
        printf("玩家拿了%d根，剩余%d根。\n", playerChoice, sticks);
        printf("计算机拿了%d根，剩余%d根。\n\n", computerChoice, sticks);
    }

    printf("游戏结束！计算机获胜！\n");
    return 0;
}

// 计算机的决策函数  
int computerPlay(int sticksLeft) {
    // 如果剩余火柴数是5的倍数加1，计算机拿走足够的火柴数使得剩余火柴数回到下一个5的倍数加1  
    if (sticksLeft % 5 == 1) {
        return 1; // 直接保持当前状态  
    }
    else {
        // 否则，计算机需要拿走更多的火柴来确保剩余火柴数是5的倍数加1  
        return 5 - (sticksLeft % 5);
    }
}