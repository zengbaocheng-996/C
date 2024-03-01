//
// Created by zengbaocheng-996 on 2024/3/1.
//

#ifndef INC_2_TEST_FUNCTION_H
#define INC_2_TEST_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>

// Binary Tree

typedef char ElemType;

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lChild;
    struct BiTNode *rChild;
} BiTNode, *pTree;

typedef struct Tag {
    pTree node;
    struct Tag *next;
} Tag, *pTag;

void InOrder(pTree tree);

void PostOrder(pTree tree);

void LevelOrder(pTree tree);

// LinkQueue

typedef pTree QueueType;

typedef struct QNode {
    pTree data;
    struct QNode *next;
} QNode, *pQNode;

typedef struct Queue {
    pQNode rear;
    pQNode front;
} Queue;

Queue CreateQueue();

void EnQueue(Queue &Q, QueueType tNode);

void DeQueue(Queue &Q, QueueType &temp);

bool IsEmpty(Queue Q);

#endif //INC_2_TEST_FUNCTION_H
