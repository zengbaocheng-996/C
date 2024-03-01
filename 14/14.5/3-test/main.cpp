#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lChild;
    struct BiTNode *rChild;
} BiTNode, *pTree;

typedef pTree QueueType;

typedef struct Tag {
    pTree node;
    struct Tag *next;
} Tag, *pTag;

typedef struct LinkNode {
    QueueType data;
    struct LinkNode *next;
} LinkNode;

typedef struct LinkQueue {
    LinkNode * rear;
    LinkNode * front;
} LinkQueue;

LinkQueue CreateQueue() {
    LinkQueue Q;
    Q.front = (LinkNode*) calloc(1, sizeof(LinkNode));
    Q.rear = Q.front;
    return Q;
}

//bool IsEmpty(Queue Q) {
//    return Q.rear == Q.front;
//}

void EnQueue(LinkQueue &Q, QueueType tNode) {
    LinkNode * nQNode = (LinkNode *) calloc(1, sizeof(LinkNode));
    nQNode->data = tNode;
    Q.rear->next = nQNode;
    Q.rear = nQNode;
}



void InOrder(pTree tree) {
    if (NULL == tree) {
        return;
    }
    InOrder(tree->lChild);
    printf("%c", tree->data);
    InOrder(tree->rChild);
}

void PostOrder(pTree tree) {
    if (NULL == tree) {
        return;
    }
    PostOrder(tree->lChild);
    PostOrder(tree->rChild);
    printf("%c", tree->data);
}


//typedef struct LinkNode {
//    QueueType data;
//    struct LinkNode *next;
//} LinkNode;
//typedef struct {
//    LinkNode *front, *rear;//链表头 链表尾 也可以称为队头队尾
//} LinkQueue;//先进先出
//队列的初始化，使用的是带头结点的链表来实现的
void InitQueue(LinkQueue &Q) {
    Q.front = Q.rear = (LinkNode *) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

//入队
//bool EnQueue(LinkQueue &Q, QueueType x) {
//    LinkNode *pnew = (LinkNode *) malloc(sizeof(LinkNode));
//    pnew->data = x;
//    pnew->next = NULL;
//    Q.rear->next = pnew;//尾指针的next指向pnew，因为从尾部入队
//    Q.rear = pnew;//rear要指向新的尾部
//    return true;
//}

//bool DeQueue(LinkQueue &Q, QueueType &x) {
//    if (Q.rear == Q.front)//队列为空
//    {
//        return false;
//    }
//    LinkNode *q = Q.front->next;//拿到第一个结点，存入q
//    Q.front->next = q->next;//让第一个结点断链
//    if (Q.rear == q)//链表只剩余一个结点时，被删除后，要改变rear
//    {
//        Q.rear = Q.front;
//    }
//    x = q->data;
//    free(q);
//    return true;
//}


void DeQueue(LinkQueue &Q, QueueType &temp) {
//    LinkNode *target = Q.front->next;
//    if(Q.rear==target)
//    {
//        LinkNode *target = Q.front->next;
//
//        temp = target->data;
//        Q.rear=Q.front;
//    }
//    else
//    {
//        LinkNode *target = Q.front->next;
//        Q.front->next= target->next;
//        temp=target->data;
//        free(target);
//    }
    if (Q.front->next == Q.rear) {
        temp = Q.rear->data;
        Q.rear = Q.front;
    } else {
        LinkNode* target = Q.front->next;
        Q.front->next = target->next;
        temp = target->data;
        free(target);

    }
}


bool IsEmpty(LinkQueue Q)
{
    return Q.rear==Q.front;
}


void LevelOrder(pTree tree) {
//    Queue Q = CreateQueue();
    LinkQueue Q = CreateQueue();
//    LinkQueue Q;
//    InitQueue(Q);//初始化队列
    pTree temp;
    EnQueue(Q, tree);
    while (!IsEmpty(Q)) {
        DeQueue(Q,temp);
//        temp=DeQueue(Q);
        printf("%c", temp->data);
        if (temp->lChild) {
            EnQueue(Q, temp->lChild);
        }
        if (temp->rChild) {
            EnQueue(Q, temp->rChild);
        }
    }
}

int main() {
    pTree tree = NULL;
    pTag pHead, pTail, pCur;
    ElemType c;
    while (scanf("%c", &c)) {
        if ('\n' == c) {
            break;
        }
        pTree nNode = (pTree) calloc(1, sizeof(BiTNode));
        nNode->data = c;
        pTag ntag = (pTag) calloc(1, sizeof(Tag));
        ntag->node = nNode;
        if (NULL == tree) {
            tree = nNode;
            pHead = pTail = pCur = ntag;
        } else {
            pTail->next = ntag;
            pTail = ntag;
            if (NULL == pCur->node->lChild) {
                pCur->node->lChild = nNode;
            } else {
                pCur->node->rChild = nNode;
                pCur = pCur->next;
            }
        }
    }
    InOrder(tree);
    printf("\n");
    PostOrder(tree);
    printf("\n");
    LevelOrder(tree);
    return 0;
}//abcdefghij
