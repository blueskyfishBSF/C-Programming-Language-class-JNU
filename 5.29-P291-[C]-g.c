//(g)编写一个程序，在屏幕上显示文本文件的内容。
//进行以下规定:显示对角坐标为(0, 1)和(79, 23)绘制的方框内的内容。
//显示正在显示其内容的文件的名称以及第零行的页码。
//显示一屏文件后，第 24 行闪烁一条消息“按任意键...”。
//当按下某个键时，应显示下一页的内容，依此类推，直到文件末尾。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define WIDTH 80
#define HEIGHT 24

void printFrame() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1) {
                printf("*");
            }
            else if (y < HEIGHT - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void displayFileContent(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char buffer[WIDTH - 2];
    int page = 0;
    printFrame();
    printf("* Page: %d File: %s *\n", page, filename);

    while (!feof(file)) {
        for (int i = 1; i < HEIGHT - 2; i++) {
            if (fgets(buffer, sizeof(buffer), file) != NULL) {
                printf("* %s", buffer);
                int len = strlen(buffer);
                if (buffer[len - 1] != '\n') {
                    printf("\n");
                }
            }
        }
        printf("* Press any key... *\n");
        _getch(); // Wait for user input
        system("cls"); // Clear screen
        printFrame();
        printf("* Page: %d File: %s *\n", ++page, filename);
    }

    fclose(file);
}

int main() {
    const char* filename = "example.txt";
    displayFileContent(filename);
    return 0;
}
