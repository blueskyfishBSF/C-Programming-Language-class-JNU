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
int main()
{
	int num;
	printf("your_choice?\n1:���ֵĽ׳�\n2:�����Ƿ�����\n3:����������ż��\n4:�˳�\n");
	while (1)
	{
		scanf("%d", &num);
		{
			switch (num)
			{
			case 1:
			{
				printf("���ֵĽ׳���...\n");
				break;
			}

			case 2:
			{
				printf("����...����\n");
				break;
			}
			case 3:
			{
				printf("���������...\n");
				break;
			}
			case 4:
			{
				printf("ok�Ѿ��˳�\n");
				return 0;
			}
			default:
				printf("��Ч����������\n");
				break;
			}
		}
		
	}
	return 0;
}