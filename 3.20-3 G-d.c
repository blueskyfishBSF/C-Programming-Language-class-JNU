#define _CRT_SECURE_NO_WARNINGS 1
//(d)ͼ��ݶ�ÿ���ٽ�������ȡ���
//ǰ5�췣��Ϊ50 ������6 - 10 �췣��Ϊ 1¬�ȣ����� 10 �췣��Ϊ5¬�ȡ�
//������� 30���黹���飬���Ļ�Ա�ʸ񽫱�ȡ����
//��дһ�����������ܻ�Ա�ٵ��������������ʾ������ʵ�����Ϣ��
#include <stdio.h>
int main()
{
	int uday;
	printf("��ٽ�������?");
	scanf("%d",&uday);

	if (0 <= uday&&uday <= 5)
		printf("����50����");
	else if (6<= uday&&uday <= 10)
		printf("����1¬��");
	else if(10 <= uday&&uday <= 30)
		printf("����5¬��");
	else if (30< uday)
		printf("ȡ����Ա�ʸ�");
	return 0;
}