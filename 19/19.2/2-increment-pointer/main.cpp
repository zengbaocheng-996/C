#include <stdio.h>

int main() {
    int a[3] = {3, 7, 8};
    int *p;
    int j;
    p = a;//p指向数组起始元素
//    j=*p++;//先把*p的值赋给j，然后对p加1。等价于语句j=*p;p++;
//    printf("a[0]=%d,j=%d,*p=%d\n",a[0],j,*p);
    printf("%d\n",*(++p));

    return 0;
}
