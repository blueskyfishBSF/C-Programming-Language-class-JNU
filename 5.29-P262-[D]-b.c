//(b)编写一个函数 getint()，该函数将从键盘接收数字字符串，将其转换为整数，并将该整数返回给调用函数。
//getint()的用法示例如下:
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
