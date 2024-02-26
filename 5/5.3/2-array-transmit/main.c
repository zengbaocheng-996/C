#include <stdio.h>
//子函数把某一个常用功能，封装起来的作用
//数组名传递到子函数后，子函数的形参接收到是数组的起始地址，因此不能把数组的长度传递给子函数
void print(int a[], int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        printf("%3d",a[i]);
    }
    a[3]=20;
    printf("\n");
}

//main函数就是主函数
int main() {
    int a[6]={1,2,3,4,5,6};
    print(a,6);//数组在传递给子函数时，它的长度传递不过去
    printf("%d",a[3]);
//    int i;
//    for(i=0;i<sizeof(a)/sizeof(int);i++)
//    {
//        printf("%d\n",a[i]);
//    }
    return 0;
}
