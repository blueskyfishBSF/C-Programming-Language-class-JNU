#define _CRT_SECURE_NO_WARNINGS 1
//ʹ�� switch Ϊѧ�����Ҽ��������
//�û�Ӧ����ѧ����õİ༶�Լ���δͨ���Ŀ�Ŀ����
//ʹ�������߼� :
//���ѧ������˵�һ��������������Ŀ�Ŀ��������3����ô������õ��κο��ޡ�
//�����������Ŀ�Ŀ��С�ڻ����3����ÿ�Ƽ���5�֡�
//���ѧ����ö��ȣ�������������Ŀ�Ŀ��������2����ô������õ��κο��ޡ�
//�����������Ŀ�Ŀ��С�ڻ����2����ÿ�Ƽ���4�֡�
//���ѧ��������ȣ�������������Ŀ�Ŀ��������1����ô������õ��κο��ޡ�
//�����������Ŀ�Ŀ������1����ÿ�Ƽ���5�֡�
#include <stdio.h>
int main()
{
	int num, dead,price;
	printf("������Σ�\n");
	scanf("%d", &num);
	printf("����˼��ƣ�\n");
	scanf("%d", &dead);
	switch (num)
	{
	case 1:
	{
		if (dead > 3)
			price = 0;
		if (dead <= 3)
			price = (+5) * dead;
		break;
	}
	case 2:
	{
		if (dead > 2)
			price = 0;
		if (dead <= 2)
			price = (+4) * dead;
		break;
	}
	case 3:
	{
		if (dead > 1)
			price = 0;
		if (dead ==1 )
			price = (-5) * dead;
		break;
	}
	default:
		printf("����");
		break;
	}
	printf("����Żݼ������Ϊ\n%d", price);
	return 0;
}