//(h)������һ�ַǳ����������ݽṹ��ͨ���������ڴ��д洢���Ƶ����ݡ�
//��Ȼ�����Ԫ��ռ���������ڴ�λ�ã��������Ԫ�ز����ڴ洢�����ڵ�λ�á�
//����Ԫ�ش洢���ڴ�ġ�ĳ���ط�������һ����ɢ�ļ�ͥ������Ȼ��ϵ��һ��
//Ԫ�ص�˳��������֮�����ʽ����ά�֡�
//��ˣ������ǳ�Ϊ�ڵ��Ԫ�صļ��ϣ�ÿ���ڵ�洢������Ϣ
//--�б��Ԫ�غ����ӣ�����ȷָʾ������̽ڵ��λ�õ�ָ����ַ���б�Ԫ�صġ�
//��дһ������ͨ��������Ŀ�ͷ����β���м�����½ڵ�����������
//����дһ������display()������ʾ�����д��ڵ����нڵ㡣
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ��������ڵ�Ľṹ��
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ����һ���½ڵ�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("�ڴ����ʧ�ܡ�\n");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ������Ŀ�ͷ�����½ڵ�
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// ������Ľ�β�����½ڵ�
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

// ��������м�����½ڵ㣨�ڸ����ڵ�֮��
void insertAfterNode(Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("������ǰһ���ڵ㲻��ΪNULL��\n");
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// ��ʾ�����е����нڵ�
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ������
int main() {
    Node* head = NULL;

    // ������Ŀ�ͷ����ڵ�
    insertAtBeginning(&head, 1);
    display(head);

    // ������Ľ�β����ڵ�
    insertAtEnd(&head, 2);
    display(head);

    // ��������м����ڵ㣨�ڵ�һ���ڵ�֮��
    insertAfterNode(head, 3);
    display(head);

    return 0;
}
