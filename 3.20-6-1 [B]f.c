#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  

// ��������  
int computerPlay(int sticksLeft);

int main() {
    int sticks = 21; // ��Ϸ��ʼʱ�Ļ����  
    int playerChoice;
    int computerChoice;

    printf("������Ϸ��ʼ������21�����\n");
    printf("���ÿ�ο���ѡ����1��4�����\n");

    while (sticks > 0) {
        // �������ѡ��  
        printf("��ǰʣ��������%d\n", sticks);
        printf("�����ѡ���ö��ٸ����1-4����");
        scanf("%d", &playerChoice);

        // �����������Ƿ�Ϸ�  
        while (playerChoice < 1 || playerChoice > 4) {
            printf("���벻�Ϸ������������루1-4����");
            scanf("%d", &playerChoice);
        }

        // �����ȡ���  
        sticks -= playerChoice;

        // ���������ѡ��  
        computerChoice = computerPlay(sticks);
        sticks -= computerChoice;

        // ��ӡ��ǰʣ������  
        printf("�������%d����ʣ��%d����\n", playerChoice, sticks);
        printf("���������%d����ʣ��%d����\n\n", computerChoice, sticks);
    }

    printf("��Ϸ�������������ʤ��\n");
    return 0;
}

// ������ľ��ߺ���  
int computerPlay(int sticksLeft) {
    // ���ʣ��������5�ı�����1������������㹻�Ļ����ʹ��ʣ�������ص���һ��5�ı�����1  
    if (sticksLeft % 5 == 1) {
        return 1; // ֱ�ӱ��ֵ�ǰ״̬  
    }
    else {
        // ���򣬼������Ҫ���߸���Ļ����ȷ��ʣ��������5�ı�����1  
        return 5 - (sticksLeft % 5);
    }
}