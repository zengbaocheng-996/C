#include <stdio.h>
#include <stdlib.h>
//当子函数要修改主函数中的p，那么就加引用。引用如何实现的，完全不需要去关心
void finput(char *&p)
{
    p=(char*)malloc(100*sizeof(char));
    fgets(p,100,stdin);
}
//练习c++的引用的使用
int main() {
    char *p;
    finput(p);
    puts(p);
    free(p);
    return 0;
}
