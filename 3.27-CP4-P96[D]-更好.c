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
int main() {
    int grade, failedSubjects, graceMarks;

    printf("������ѧ���İ༶��1-3����δͨ���Ŀ�Ŀ����");
    scanf("%d %d", &grade, &failedSubjects);

    switch (grade) {
    case 1:
        graceMarks = (failedSubjects > 3) ? 0 : 5 * failedSubjects;
        break;
    case 2:
        graceMarks = (failedSubjects > 2) ? 0 : 4 * failedSubjects;
        break;
    case 3:
        graceMarks = (failedSubjects > 1) ? 0 : 5 * failedSubjects;
        break;
    default:
        printf("��Ч�İ༶���롣\n");
        graceMarks = -1; // ��ʾ��Ч����
        break;
    }

    if (graceMarks >= 0) {
        printf("ѧ���ļ�������ǣ�%d\n", graceMarks);
    }

    return 0;
}
