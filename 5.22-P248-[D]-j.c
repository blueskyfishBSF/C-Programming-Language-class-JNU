//(j)���ջ��ͬ���ڶ����У���Ԫ�ص���ӷ�����ĩβ(��Ϊ���еġ��󷽡���ɾ����������һ��(��Ϊ���еġ�ǰ�ˡ�)��
//��дһ��������ʵ��ʹ��������ж��С�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ��������Ľڵ�ṹ��
struct Node {
    int data;
    struct Node* next;
};

// ������нṹ��
struct Queue {
    struct Node* front, * rear;
};

// ����һ���µĿն���
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// ��������Ԫ��
void enqueue(struct Queue* q, int value) {
    // ����һ���µ�����ڵ�
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;

    // �������Ϊ�գ����½ڵ���Ƕ��е�ǰ��Ҳ�Ǻ��
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }

    // ���½ڵ���ӵ����е�ĩβ�������º��ָ��
    q->rear->next = temp;
    q->rear = temp;
}

// �Ӷ�����ɾ��Ԫ��
int dequeue(struct Queue* q) {
    // �������Ϊ�գ��򷵻ش���ֵ
    if (q->front == NULL)
        return INT_MIN;

    // �洢ǰ�˽ڵ㲢����Ӷ������Ƴ�
    struct Node* temp = q->front;
    q->front = q->front->next;

    // ���ǰ�������һ���ڵ㣬����º��ΪNULL
    if (q->front == NULL)
        q->rear = NULL;

    int popped = temp->data;
    free(temp);
    return popped;
}

// ��������չʾ���в���
int main() {
    struct Queue* q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    dequeue(q);
    dequeue(q);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    printf("���е�ǰ��Ԫ����: %d\n", q->front->data);
    printf("���еĺ��Ԫ����: %d\n", q->rear->data);
    return 0;
}
