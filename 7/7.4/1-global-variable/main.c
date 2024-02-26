#include <stdio.h>

int i=10; //全局变量，不建议使用

void print(int i)//形参看成一个局部变量
{
    printf("I am print i=%d\n",i);
}
int main() {
    {
        int j=4;
    }//局部变量只在离自己最近的大括号内有效
    printf("main i = %d\n",i);
    i=3;
    print(88);
    return 0;
}
