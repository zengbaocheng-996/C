#include <stdio.h>

//结构体指针
//stu 等价于 struct student, pstu等价于struct student*
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu, *pstu;
//typedef的使用，typedef起别名
typedef int INTEGER;

int main() {
    stu s={0};
    stu *p=&s;//定义了一个结构体指针变量
    pstu p1=&s;
    INTEGER num = 10;
    printf("num=%d\n",num);
    return 0;
}
