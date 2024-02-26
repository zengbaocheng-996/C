#include <stdio.h>
#include <string.h>
int main() {
    char c[100];
    char d[100];


    gets(c);
    int i,j;
    for(int i=0,j=strlen(c)-1;i<strlen(c);i++,j--)
    {
        d[j]=c[i];
    }

    int result = strcmp(c, d);

    if (result < 0)

    {

        printf("%d\n",-1);

    }

    else if (result > 0)

    {

        printf("%d\n", 1);

    }

    else {

        printf("%d\n", 0);

    }
    return 0;
}
