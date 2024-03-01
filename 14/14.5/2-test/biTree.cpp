//
// Created by zengbaocheng-996 on 2024/3/1.
//
#include "function.h"

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

void LevelOrder(pTree tree) {
    Queue Q = CreateQueue();
    QueueType temp;
    EnQueue(Q, tree);
    while (!IsEmpty(Q)) {
        DeQueue(Q, temp);
        printf("%c", temp->data);
        if (NULL != temp->lChild) {
            EnQueue(Q, temp->lChild);
        }
        if (NULL != temp->rChild) {
            EnQueue(Q, temp->rChild);
        }
    }
}
