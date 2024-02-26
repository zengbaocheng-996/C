#include <stdio.h>

int f(int n)
{
    //一定要有结束条件，一定在return之前
    if(1==n)
    {
        return 1;
    }
    return n*f(n-1);//写公式
}

//上台阶，到第n个台阶，有多少种走法
int step(int n)
{
    if(1==n||2==n)//当台阶是1个，或者2个时，递归结束
    {
        return n;
    }
    return step(n-1)+step(n-2);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("step(%d)=%d\n",n,step(n));
//    printf("f(%d)=%d\n",n,f(n));

    return 0;
}
