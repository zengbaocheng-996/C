#include <stdlib.h>
#include <stdio.h>

typedef int ElemType;
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode* next;
}LinkNode, *LinkList;

void PrintList(LinkList L)
{
    L=L->next;
    while(L!=NULL)
    {
        printf("%d",L->data);//打印当前结点数据
        L=L->next;//指向下一个结点
        if(L!=NULL)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void HeadInsert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LinkNode));
    L->next = NULL;
    ElemType x;
    scanf("%d",&x);
    while(x!=9999)
    {
        LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }
}

void TailInsert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LinkNode));
    L->next = NULL;
    LinkNode* r = L;
    ElemType x;
    scanf("%d",&x);
    while(x!=9999)
    {
        LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
        s->data = x;
        s->next = NULL;
        r->next = s;
        r = s;
        scanf("%d",&x);
    }
}

int main() {
    LinkList L;
    HeadInsert(L);
    PrintList(L);
    TailInsert(L);
    PrintList(L);
    return 0;
}
