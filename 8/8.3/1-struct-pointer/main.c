#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    int num;
    char name[20];
    char sex;
};
//结构体指针的联系
int main() {
    struct student s = {1001,"wangle",'M'};
    struct student sarr[3]={1001,"lilei",'M',1002,"hanmeimei",'M',1007,"zhangsan",'F'};
    struct student *p;//定义了一个结构体指针变量
    p=&s;
//    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex); //方式1访问通过结构体指针去访问成员
    printf("%d %s %c\n",p->num,p->name,p->sex); //方式2访问通过结构体指针去访问成员，用这种
    p=sarr;
    printf("%d %s %c\n",p->num,p->name,p->sex); //方式2访问通过结构体指针去访问成员，用这种
    p=p+1;
    printf("%d %s %c\n",p->num,p->name,p->sex); //方式2访问通过结构体指针去访问成员，用这种
    //下面给结构体指针p通过malloc申请空间，并对其成员赋值，再访问
    p=(struct student*)malloc(sizeof(struct student));
    p->num=100;
    p->sex='M';
    strcpy(p->name,"longge");
    printf("%d %s %c\n",p->num,p->name,p->sex); //方式2访问通过结构体指针去访问成员，用这种
    return 0;
}
