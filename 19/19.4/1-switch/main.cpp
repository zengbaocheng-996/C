#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x)) {
        switch (x) {
            case 1:
                printf("test 1\n");
//                break;
            case 2:
                printf("test 2\n");
//                break;
            case 3:
                printf("test 3\n");
                break;
        }
    }
    return 0;
}
