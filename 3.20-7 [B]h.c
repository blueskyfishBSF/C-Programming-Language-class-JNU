#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
int main() {
    int num;
    int a, b = 0;
    printf("������һ������: ");
    scanf("%d", &num);
    a = num / 8;
    b = num % 8;
    printf("�������İ˽��Ʊ�ʾΪ: ");
    printf("%d%d",a,b);

    return 0;
}