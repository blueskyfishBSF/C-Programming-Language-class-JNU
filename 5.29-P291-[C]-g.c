//(g)��дһ����������Ļ����ʾ�ı��ļ������ݡ�
//�������¹涨:��ʾ�Խ�����Ϊ(0, 1)��(79, 23)���Ƶķ����ڵ����ݡ�
//��ʾ������ʾ�����ݵ��ļ��������Լ������е�ҳ�롣
//��ʾһ���ļ��󣬵� 24 ����˸һ����Ϣ���������...����
//������ĳ����ʱ��Ӧ��ʾ��һҳ�����ݣ��������ƣ�ֱ���ļ�ĩβ��
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
