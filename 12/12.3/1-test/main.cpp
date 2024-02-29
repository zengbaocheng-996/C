#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

void PrintList(LinkList L) {
    L = L->next;
    while (L != NULL) {
        printf("%3d", L->data);//打印当前结点数据
        L = L->next;//指向下一个结点
    }
    printf("\n");
}

void TailInsert(LinkList &L) {
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    LNode *r = L;
    ElemType x;
    scanf("%d", &x);
    while (x != 9999) {
        LNode *s = (LNode *) malloc(sizeof(LNode));
        s->data = x;
        s->next = NULL;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
}

LNode *Find(LinkList L, int pos) {
    if (pos - 1 < 0) {
        return NULL;
    }
    int index = 0;
    while (L->next != NULL) {
        if (pos - 1 == index) {
            return L->next;
        }
        L = L->next;
        index += 1;
    }
    return NULL;
}

bool Insert(LinkList L, int pos, int data) {
    LNode *preNode = Find(L, pos - 1);
    if (preNode != NULL) {
        LNode *curNode = (LNode *) malloc(sizeof(LNode));
        curNode->data = data;
        curNode->next = preNode->next;
        preNode->next = curNode;
        return true;
    } else {
        return false;
    }
}

bool Delete(LinkList L, int pos) {
    LNode *preNode = Find(L, pos - 1);
    if (preNode != NULL) {
        LNode *curNode = preNode->next;
        preNode->next = curNode->next;
        free(curNode);
        return true;
    } else {
        return false;
    }
}

int main() {
    LinkList L;
    //
    TailInsert(L);
    //
    LNode *targetNode = Find(L, 2);
    printf("%d\n", targetNode->data);
    //
    Insert(L, 2, 99);
    PrintList(L);
    //
    Delete(L, 4);
    PrintList(L);
    return 0;
}
//3 4 5 6 7 9999