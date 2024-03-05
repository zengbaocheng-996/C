#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("%2d\n", x << 1);
    printf("%2d", x >> 1);
    return 0;
}
