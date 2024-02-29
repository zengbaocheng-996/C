#include <stdio.h>
#include <stdlib.h>

#define MaxSize 5
typedef int ElemType;
typedef struct ZStack {
    ElemType data[50];
    int top = -1;
} ZStack;

typedef struct ZQueue {
    ElemType data[MaxSize];
    int rear = 0, front = 0;
} ZQueue;

bool Push(ZStack &zStack, ElemType x) {
    if (zStack.top == MaxSize - 1) {
        return false;
    }
    zStack.data[++zStack.top] = x;
    return true;
}

bool Pop(ZStack &zStack, ElemType &x) {
    if (zStack.top == -1) {
        return false;
    }
    x = zStack.data[zStack.top--];
    return true;
}

bool EnQueue(ZQueue &zQueue, ElemType x) {
    if ((zQueue.rear + 1) % MaxSize == zQueue.front) {
        return false;
    }
    zQueue.data[zQueue.rear] = x;
    zQueue.rear = (zQueue.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(ZQueue &zQueue, ElemType &x) {
    if (zQueue.rear == zQueue.front) {
        return false;
    }
    x = zQueue.data[zQueue.front];
    zQueue.front = (zQueue.front + 1) % MaxSize;
    return true;
}

int main() {
    ZStack zStack;
    ElemType x;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &x);
        Push(zStack, x);
    }
//*

//*
    bool ret;
    ZQueue zQueue;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        ret = EnQueue(zQueue, x);
        if(!ret)
        {
            for (int j = 0; j < 3; j++) {
                Pop(zStack, x);
                printf(" %d", x);
            }
            printf("\nfalse\n");
        }
    }
//*
    for (int i = 0; i < 5; i++) {
        ret = DeQueue(zQueue, x);
        if(ret)
        {
            printf(" %d",x);
        }
    }
    return 0;
}
