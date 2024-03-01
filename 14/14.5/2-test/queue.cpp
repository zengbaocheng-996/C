//
// Created by zengbaocheng-996 on 2024/3/1.
//
#include "function.h"

Queue CreateQueue() {
    Queue Q;
    Q.front = (pQNode) calloc(1, sizeof(QNode));
    Q.rear = Q.front;
    return Q;
}

bool IsEmpty(Queue Q) {
    return Q.rear == Q.front;
}

void EnQueue(Queue &Q, QueueType tNode) {
    pQNode nQNode = (pQNode) calloc(1, sizeof(QNode));
    nQNode->data = tNode;
    Q.rear->next = nQNode;
    Q.rear = nQNode;
}

void DeQueue(Queue &Q, QueueType &temp) {
    pQNode target = Q.front->next;
    temp = target->data;
    if (target == Q.rear) {
        Q.rear = Q.front;
        Q.front->next = NULL;
    } else {
        Q.front->next = target->next;
    }
    free(target);
}