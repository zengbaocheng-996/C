#include <stdio.h>
typedef int ElemType;
#define MaxSize 50
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;

void Print(SqList L)
{
    for(int i=0;i<L.length;i++)
    {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}

bool Insert(SqList &L, int pos, ElemType x)
{
    if(L.length==MaxSize)
    {
        return false;
    }
    if(pos<1||pos>L.length+1)
    {
        return false;
    }
    for(int j=L.length; j>=pos;j--)
    {
        L.data[j]=L.data[j-1];
    }
    L.data[pos-1] = x;
    L.length++;
    return true;
}

bool Delete(SqList &L, int pos)
{
    if(pos<1||pos>L.length+1)
    {
        return false;
    }
    for(int j = pos; j < L.length; j++)
    {
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}

int main() {
    SqList L;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.length=3;
    int x;
    scanf("%d",&x);
    if(Insert(L,2,x))
    {
        Print(L);
    }
    else
    {
        printf("false");
    }
    scanf("%d",&x);
    if(Delete(L,x))
    {
        Print(L);
    }
    else
    {
        printf("false");
    }
    return 0;
}
