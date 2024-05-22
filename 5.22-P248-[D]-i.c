//(i)栈是一种数据结构，其中总是添加新元素或删除现有元素发生在同一端。
//此端通常称为堆栈的“顶部”。
//这种情况可以类比一下自助餐厅里的一堆盘子，每个新盘子都被添加到“顶部”或从“顶部”取下堆。
//有多种应用程序可以使用堆栈。
//例如，递归、保留跟踪函数调用、表达式求值等。
//编写一个程序来使用堆栈实现堆栈链接列表。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 定义栈的节点结构体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 定义栈结构体
typedef struct Stack {
    Node* top;
} Stack;

// 创建一个新的栈节点
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 初始化栈
void initStack(Stack* stack) {
    stack->top = NULL;
}

// 检查栈是否为空
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// 向栈中添加元素
void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    if (!newNode) {
        printf("堆栈溢出\n");
        return;
    }
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d 已经被添加到栈中\n", data);
}

// 从栈中移除元素
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("堆栈下溢\n");
        return INT_MIN;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// 查看栈顶元素
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("堆栈为空\n");
        return INT_MIN;
    }
    return stack->top->data;
}

// 主函数
int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("%d 从栈中弹出\n", pop(&stack));
    printf("栈顶元素是 %d\n", peek(&stack));

    return 0;
}
