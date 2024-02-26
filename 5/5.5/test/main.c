#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
