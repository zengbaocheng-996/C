#include <stdio.h>

void change(int *i_pointer)
{
    *i_pointer = *i_pointer/2;
}

int main() {
    int i;
    scanf("%d",&i);
    change(&i);
    printf("%d",i);
    return 0;
}
