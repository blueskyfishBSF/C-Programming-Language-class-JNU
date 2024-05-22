//(i)ջ��һ�����ݽṹ���������������Ԫ�ػ�ɾ������Ԫ�ط�����ͬһ�ˡ�
//�˶�ͨ����Ϊ��ջ�ġ���������
//��������������һ�������������һ�����ӣ�ÿ�������Ӷ�����ӵ�����������ӡ�������ȡ�¶ѡ�
//�ж���Ӧ�ó������ʹ�ö�ջ��
//���磬�ݹ顢�������ٺ������á����ʽ��ֵ�ȡ�
//��дһ��������ʹ�ö�ջʵ�ֶ�ջ�����б�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ����ջ�Ľڵ�ṹ��
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ����ջ�ṹ��
typedef struct Stack {
    Node* top;
} Stack;

// ����һ���µ�ջ�ڵ�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ��ʼ��ջ
void initStack(Stack* stack) {
    stack->top = NULL;
}

// ���ջ�Ƿ�Ϊ��
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// ��ջ�����Ԫ��
void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    if (!newNode) {
        printf("��ջ���\n");
        return;
    }
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d �Ѿ�����ӵ�ջ��\n", data);
}

// ��ջ���Ƴ�Ԫ��
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("��ջ����\n");
        return INT_MIN;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// �鿴ջ��Ԫ��
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("��ջΪ��\n");
        return INT_MIN;
    }
    return stack->top->data;
}

// ������
int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("%d ��ջ�е���\n", pop(&stack));
    printf("ջ��Ԫ���� %d\n", peek(&stack));

    return 0;
}
