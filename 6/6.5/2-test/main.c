#include <stdio.h>
#include <stdlib.h>
//malloc的使用
int main() {
    int n;//代表空间申请大小
    scanf("%d",&n);//读数
    char c;
    scanf("%c",&c);
    char *p;
    p=(char*)malloc(n);//申请n个字节大小的空间，强制类型转换为char*
    gets(p);//可以使用fgets(p,n,stdin); gets被去掉是因为不安全，会访问越界
    puts(p);
    return 0;
}
