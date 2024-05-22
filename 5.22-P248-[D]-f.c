//(f)编写一个菜单驱动程序来描述Library的工作，菜单选项应该是:
//1.添加图书信息
//2.显示图书信息
//3.列出给定作者的所有书籍
//4.列出指定书籍的书名
//5.列出图书馆的图书数量
//6.按入藏号顺序列出书籍
//7.退出
//创建一个名为 Library 的结构来保存入藏号、书名、作者姓名、书价以及指示书是否发行的标志。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 50
#define MAX_AUTHOR 50

// 定义Library结构体
typedef struct {
    int id; // 入藏号
    char title[MAX_TITLE]; // 书名
    char author[MAX_AUTHOR]; // 作者姓名
    float price; // 书价
    int issued; // 是否发行
} Library;

// 声明图书数组和计数器
Library books[MAX_BOOKS];
int count = 0;

// 函数声明
void addBookInfo();
void displayBookInfo();
void listBooksByAuthor();
void listBookTitles();
void listTotalBooks();
void listBooksInOrder();
void exitProgram();

int main() {
    int choice;

    while (1) {
        printf("\n图书馆管理系统\n");
        printf("1. 添加图书信息\n");
        printf("2. 显示图书信息\n");
        printf("3. 列出给定作者的所有书籍\n");
        printf("4. 列出指定书籍的书名\n");
        printf("5. 列出图书馆的图书数量\n");
        printf("6. 按入藏号顺序列出书籍\n");
        printf("7. 退出\n");
        printf("请输入你的选择：");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addBookInfo();
            break;
        case 2:
            displayBookInfo();
            break;
        case 3:
            listBooksByAuthor();
            break;
        case 4:
            listBookTitles();
            break;
        case 5:
            listTotalBooks();
            break;
        case 6:
            listBooksInOrder();
            break;
        case 7:
            exitProgram();
            return 0;
        default:
            printf("无效的选择，请重新输入。\n");
        }
    }
    return 0;
}

// 实现函数
void addBookInfo() {
    // 添加图书信息的代码
}

void displayBookInfo() {
    // 显示图书信息的代码
}

void listBooksByAuthor() {
    // 列出给定作者的所有书籍的代码
}

void listBookTitles() {
    // 列出指定书籍的书名的代码
}

void listTotalBooks() {
    // 列出图书馆的图书数量的代码
}

void listBooksInOrder() {
    // 按入藏号顺序列出书籍的代码
}

void exitProgram() {
    printf("感谢使用图书馆管理系统。再见！\n");
}
