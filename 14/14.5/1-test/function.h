//
// Created by Administrator on 2024/3/1.
//

#ifndef INC_1_TEST_FUNCTION_H
#define INC_1_TEST_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lChild;
    struct BiTNode *rChild;
}BiTNode, *pTree;

typedef struct Tag{
    pTree node;
    struct Tag *next;
}Tag, *pTag;

#endif //INC_1_TEST_FUNCTION_H
