#define _CRT_SECURE_NO_WARNINGS 1
//��дһ���˵�������������������ѡ��:
//1.���ֵĽ׳�
//2.�Ƿ�����
//3.������ż��
//4.�˳�
//һ��ѡ���˲˵����Ӧ�ò�ȡ�ʵ��Ĳ�����һ���ò�����ɣ��˵��ͻ����³��֡�
//�����û�ѡ���˳���ѡ��������Ӧ�������С�
//��ʾ : ʹ������ while �� switch ��䡣
#include <stdio.h>
// ��������
long factorial(int n);
int isPrime(int num);
void checkOddEven(int num);

int main() {
    int choice, num;

    while (1) {
        printf("\nѡ��һ��ѡ��:\n");
        printf("1. ���ֵĽ׳�\n");
        printf("2. �Ƿ�Ϊ����\n");
        printf("3. ������ż��\n");
        printf("4. �˳�\n");
        printf("��������ѡ��: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("����һ������: ");
            scanf("%d", &num);
            printf("%d �Ľ׳���: %ld\n", num, factorial(num));
            break;
        case 2:
            printf("����һ������: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d ��һ��������\n", num);
            else
                printf("%d ����һ��������\n", num);
            break;
        case 3:
            printf("����һ������: ");
            scanf("%d", &num);
            checkOddEven(num);
            break;
        case 4:
            printf("�����˳���\n");
            return 0;
        default:
            printf("��Ч��ѡ�����������롣\n");
        }
    }
    return 0;
}

// ����׳˵ĺ���
long factorial(int n) {
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}

// ����Ƿ�Ϊ�����ĺ���
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// ���������ż���ĺ���
void checkOddEven(int num) {
    if (num % 2 == 0)
        printf("%d ��ż����\n", num);
    else
        printf("%d ��������\n", num);
}
