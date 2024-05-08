//(d)在集市上，我们经常会遇到一个拼图，其中包含安装在框架上的 15 个编号的正方形碎片。
// 这些部件可以水平或垂直移动。这些部分的可能排列如下所示(见图 8.12)
// 01 04 15 17
// 08 10 02 11
// 14 03 06 13
// 12 09 05   
//正如你所看到的，右下角有一个空白。通过程序实现以下过程绘制
//如上所示的方框。按上述顺序显示数字。允许用户点击任意一个箭头键(上、下、左、右)。
//如果用户按下右箭头键，则数字5的棋子应向右移动，空自应替换5 的原始位置。
//同样，如果按下向下箭头键，则13应向下移动，空白应替换原来的位置13的位置。
//如果按下左箭头键或上箭头键，则不应执行任何操作。
//用户将继续按箭头键，直到数字不再按升序排列。跟踪用户设法按升序排列数字的移动次数。以最少步数完成任务的用户即为获胜者。
//我们如何处理方向键 ? 我们无法使用 scanf()函数接收它们。箭头键是通过“扫描码”识别的特殊键。
//在您的程序中使用以下函数。它将返回被击中的箭头键的扫描码。不用担心这个函数是怎么写的。
//我们稍后会处理它。箭头键的扫描码是 :向上箭头键 - 72 向下箭头键 - 80 左箭头键 - 75 右箭头键 - 77
//*Returns scan code of the key that has been hit 
//*/#include "dos .h"
//getkey()
//{
//	union REGS i,o;
//	while (!kbhit())
//		;
//	i.h.ah = 0;
//	int86(22, &i,&o);
//	return(o.h.ah);
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include "dos.h"

// 函数原型
int getkey();

// 主函数
int main() {
    int puzzle[4][4] = {
        {1, 4, 15, 17},
        {8, 10, 2, 11},
        {14, 3, 6, 13},
        {12, 9, 5, 0}
    };
    int x = 3, y = 3; // 空白格的初始位置
    int moves = 0; // 移动次数
    int key; // 存储按键扫描码

    // 游戏主循环
    do {
        system("cls"); // 清屏
        // 打印拼图
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (puzzle[i][j] != 0) {
                    printf("%02d ", puzzle[i][j]);
                }
                else {
                    printf("   "); // 空白格
                }
            }
            printf("\n");
        }

        key = getkey(); // 获取按键扫描码
        switch (key) {
        case 77: // 右箭头键
            if (y > 0) {
                puzzle[x][y] = puzzle[x][y - 1];
                puzzle[x][y - 1] = 0;
                y--;
                moves++;
            }
            break;
        case 80: // 下箭头键
            if (x > 0) {
                puzzle[x][y] = puzzle[x - 1][y];
                puzzle[x - 1][y] = 0;
                x--;
                moves++;
            }
            break;
        }
    } while (!is_sorted(puzzle)); // 检查是否升序排列

    printf("恭喜！您用了 %d 步完成了拼图。\n", moves);
    return 0;
}

// 检查拼图是否升序排列的函数
int is_sorted(int p[4][4]) {
    int prev = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (p[i][j] && p[i][j] < prev)
                return 0;
            prev = p[i][j];
        }
    }
    return 1;
}

// 模拟 getkey 函数
int getkey() {
    union REGS i, o;
    while (!kbhit())
        ;
    i.h.ah = 0;
    int86(22, &i, &o);
    return(o.h.ah);
}

