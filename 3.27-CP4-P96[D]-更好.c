#define _CRT_SECURE_NO_WARNINGS 1
//使用 switch 为学生查找减免分数。
//用户应输入学生获得的班级以及他未通过的科目数。
//使用以下逻辑 :
//如果学生获得了第一名并且他不及格的科目数量大于3，那么他不会得到任何宽限。
//如果他不及格的科目数小于或等于3，则每科减免5分。
//如果学生获得二等，并且他不及格的科目数量大于2，那么他不会得到任何宽限。
//如果他不及格的科目数小于或等于2，则每科减免4分。
//如果学生获得三等，并且他不及格的科目数量大于1，那么他不会得到任何宽限。
//如果他不及格的科目数等于1，则每科减免5分。
#include <stdio.h>
int main() {
    int grade, failedSubjects, graceMarks;

    printf("请输入学生的班级（1-3）和未通过的科目数：");
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
        printf("无效的班级输入。\n");
        graceMarks = -1; // 表示无效输入
        break;
    }

    if (graceMarks >= 0) {
        printf("学生的减免分数是：%d\n", graceMarks);
    }

    return 0;
}
