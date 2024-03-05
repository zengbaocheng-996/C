#include <stdio.h>

//二级指针的理解
int main() {
    int i = 10;
    int *p = &i;
    int **p2 = &p;
    printf("sizeof(p2)=%d\n", sizeof(p2));//p2和p同样大，都是8个字节
    printf("**p2=%d\n", **p2);//通过两次取值可以拿到i
    return 0;
}
