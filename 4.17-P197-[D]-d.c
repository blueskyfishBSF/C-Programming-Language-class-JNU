//(d)�Ӽ��̽���ʮ����������뵽һ�������С�
// ��дһ�������ҳ������ж��ٸ����������ж��ٸ��Ǹ������ж��ٸ���ż�����ж��ٸ���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int numbers[25];
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;

    printf("�������ʮ������֣�\n");
    for (int i = 0; i < 25; ++i)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0) 
        {
            positiveCount++;
        }
        else if (numbers[i] < 0) 
        {
            negativeCount++;
        }
        if (numbers[i] % 2 == 0) 
        {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    printf("�����ĸ�����%d\n", positiveCount);
    printf("�����ĸ�����%d\n", negativeCount);
    printf("ż���ĸ�����%d\n", evenCount);
    printf("�����ĸ�����%d\n", oddCount);

    return 0;
}
