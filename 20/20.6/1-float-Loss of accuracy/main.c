#include <stdio.h>

int main() {
    //赋值的一瞬间发生精度丢失，因为浮点常量默认是8个字节存储，double型
    double a = 1.23456789e10;//12345678900
    double b;
    b = a + 20;//计算时，精度丢失 12345678920
    printf("b = %f", b);//%f即可输出float，也可以输出double类型
    return 0;
}
