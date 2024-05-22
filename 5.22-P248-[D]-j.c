//(j)与堆栈不同，在队列中，新元素的添加发生在末尾(称为队列的“后方”而删除发生在另一端(称为队列的“前端”)。
//编写一个程序来实现使用链表进行队列。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 定义链表的节点结构体
struct Node {
    int data;
    struct Node* next;
};

// 定义队列结构体
struct Queue {
    struct Node* front, * rear;
};

// 创建一个新的空队列
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// 向队列添加元素
void enqueue(struct Queue* q, int value) {
    // 创建一个新的链表节点
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;

    // 如果队列为空，则新节点既是队列的前端也是后端
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }

    // 将新节点添加到队列的末尾，并更新后端指针
    q->rear->next = temp;
    q->rear = temp;
}

// 从队列中删除元素
int dequeue(struct Queue* q) {
    // 如果队列为空，则返回错误值
    if (q->front == NULL)
        return INT_MIN;

    // 存储前端节点并将其从队列中移除
    struct Node* temp = q->front;
    q->front = q->front->next;

    // 如果前端是最后一个节点，则更新后端为NULL
    if (q->front == NULL)
        q->rear = NULL;

    int popped = temp->data;
    free(temp);
    return popped;
}

// 主函数来展示队列操作
int main() {
    struct Queue* q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    dequeue(q);
    dequeue(q);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    printf("队列的前端元素是: %d\n", q->front->data);
    printf("队列的后端元素是: %d\n", q->rear->data);
    return 0;
}
