#include "func.h"

int print_star(int i)//i即形式参数
{
    printf("*********************");
    printf("printstar %d\n",i);
    return i+3;
}

//这里是函数的定义
void print_message()
{
    printf("how do you do\n");
    print_star(3);
}