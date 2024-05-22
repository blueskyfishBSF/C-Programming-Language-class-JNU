//(f)��дһ���˵���������������Library�Ĺ������˵�ѡ��Ӧ����:
//1.���ͼ����Ϣ
//2.��ʾͼ����Ϣ
//3.�г��������ߵ������鼮
//4.�г�ָ���鼮������
//5.�г�ͼ��ݵ�ͼ������
//6.����غ�˳���г��鼮
//7.�˳�
//����һ����Ϊ Library �Ľṹ��������غš���������������������Լ�ָʾ���Ƿ��еı�־��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 50
#define MAX_AUTHOR 50

// ����Library�ṹ��
typedef struct {
    int id; // ��غ�
    char title[MAX_TITLE]; // ����
    char author[MAX_AUTHOR]; // ��������
    float price; // ���
    int issued; // �Ƿ���
} Library;

// ����ͼ������ͼ�����
Library books[MAX_BOOKS];
int count = 0;

// ��������
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
        printf("\nͼ��ݹ���ϵͳ\n");
        printf("1. ���ͼ����Ϣ\n");
        printf("2. ��ʾͼ����Ϣ\n");
        printf("3. �г��������ߵ������鼮\n");
        printf("4. �г�ָ���鼮������\n");
        printf("5. �г�ͼ��ݵ�ͼ������\n");
        printf("6. ����غ�˳���г��鼮\n");
        printf("7. �˳�\n");
        printf("���������ѡ��");
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
            printf("��Ч��ѡ�����������롣\n");
        }
    }
    return 0;
}

// ʵ�ֺ���
void addBookInfo() {
    // ���ͼ����Ϣ�Ĵ���
}

void displayBookInfo() {
    // ��ʾͼ����Ϣ�Ĵ���
}

void listBooksByAuthor() {
    // �г��������ߵ������鼮�Ĵ���
}

void listBookTitles() {
    // �г�ָ���鼮�������Ĵ���
}

void listTotalBooks() {
    // �г�ͼ��ݵ�ͼ�������Ĵ���
}

void listBooksInOrder() {
    // ����غ�˳���г��鼮�Ĵ���
}

void exitProgram() {
    printf("��лʹ��ͼ��ݹ���ϵͳ���ټ���\n");
}
