//(b)��дһ������ getint()���ú������Ӽ��̽��������ַ���������ת��Ϊ�������������������ظ����ú�����
//getint()���÷�ʾ������:
//#include <stdio.h>
//void main() 
//{
//	int a;
//	a = getint();
//	printf("you entered %d",a);
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int getint() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int a;
    a = getint();
    printf("you entered %d", a);
    return 0;
}
