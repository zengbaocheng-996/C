#include <stdio.h>

int main() {
    int i, x;
    int result = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &x);
        result ^= x;
    }
    printf("%d",result);
    return 0;
}
