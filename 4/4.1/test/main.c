#include <stdio.h>

int main() {
    int a =12321;
    int b =0,backup_a;
    backup_a=a;
    while(a)
    {
        b=b*10 + a%10;
        printf("%d\n",b);
        a=a/10;
    }
    if(b==backup_a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
