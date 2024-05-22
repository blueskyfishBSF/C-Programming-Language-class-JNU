//(h)链表是一种非常常见的数据结构，通常用于在内存中存储类似的数据。
//虽然数组的元素占据连续的内存位置，但链表的元素不限于存储在相邻的位置。
//各个元素存储在内存的“某个地方”就像一个分散的家庭，但仍然联系在一起。
//元素的顺序由它们之间的显式链接维持。
//因此，链表是称为节点的元素的集合，每个节点存储两项信息
//--列表的元素和链接，即明确指示包含后继节点的位置的指针或地址该列表元素的。
//编写一个程序，通过在链表的开头、结尾或中间添加新节点来构建链表。
//还编写一个函数display()，它显示链表中存在的所有节点。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 定义链表节点的结构体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 创建一个新节点
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("内存分配失败。\n");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 在链表的开头插入新节点
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// 在链表的结尾插入新节点
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// 在链表的中间插入新节点（在给定节点之后）
void insertAfterNode(Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("给定的前一个节点不能为NULL。\n");
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// 显示链表中的所有节点
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 主函数
int main() {
    Node* head = NULL;

    // 在链表的开头插入节点
    insertAtBeginning(&head, 1);
    display(head);

    // 在链表的结尾插入节点
    insertAtEnd(&head, 2);
    display(head);

    // 在链表的中间插入节点（在第一个节点之后）
    insertAfterNode(head, 3);
    display(head);

    return 0;
}
