//(a)�Ӽ��̽���ʮ����������뵽һ�������С�
//�û�ͨ����������Ҫ���ҵĺ��롣
//��дһ�����򣬲���Ҫ���ҵ������Ƿ�����������У�������ڣ�����ʾ���������г��ֵĴ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int arr[25];
    int target;
    int count = 0;

    // �����ʮ�������
    printf("�������ʮ������֣�\n");
    for (int i = 0; i < 25; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    // ����Ҫ���ҵĺ���
    printf("������Ҫ���ҵĺ��룺\n");
    scanf("%d", &target);

    // �������飬����Ŀ�����
    for (int i = 0; i < 25; ++i) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }

    // ��ʾ���
    if (count > 0)
    {
        printf("���� %d �����������У������� %d �Ρ�\n", target, count);
    }
    else 
    {
        printf("���� %d �������������С�\n", target);
    }

    return 0;
}
