#include <stdio.h>

typedef struct student
{
    int Id;
    char Name[20];
    char Sex;
}stu,*stup;

int main() {
    stu test;
    stup testp = &test;
    scanf("%d%s %c",&(testp->Id),testp->Name,&(testp->Sex));
    printf("%d %s %c\n",testp->Id,testp->Name,testp->Sex);
    return 0;
}
