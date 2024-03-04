#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MaxSize 10
typedef int ElemType;
typedef struct {
    ElemType *data;
    int len;
} Sequence;

void InitS(Sequence &S) {
    S.data = (ElemType *) malloc(sizeof(ElemType) * MaxSize);
    S.len = MaxSize;
}

void PrintS(Sequence S) {
    int i;
    for (i = 0; i < S.len; i++)
        printf("%3d", S.data[i]);
    printf("\n");

}

void swap(ElemType &a, ElemType &b) {
    ElemType c = a;
    a = b;
    b = c;
}

void SelectSort(Sequence &S) {
    int i, j;
    ElemType min_pos;
    for (i = 0; i < MaxSize - 1; i++) {
        min_pos = i;
        for (j = i; j < MaxSize; j++) {
            if (S.data[j] < S.data[min_pos]) {
                min_pos = j;
            }
        }
        swap(S.data[i], S.data[min_pos]);
    }
}

void AdjustDown(Sequence &S, int dad, int len) {
    int son = 2 * dad + 1;
    while (son < len) {
        if (son + 1 < len && S.data[son] < S.data[son + 1]) {
            son++;
        }
        if (S.data[son] > S.data[dad]) {
            swap(S.data[son], S.data[dad]);
            dad = son;
            son = 2 * dad + 1;
        } else {
            break;
        }
    }
}

void HeapSort(Sequence &S) {
    int i;
    for (i = (S.len - 1) / 2; i >= 0; i--) {
        AdjustDown(S, i, MaxSize);
    }
    swap(S.data[0], S.data[MaxSize-1]);
//    PrintS(S);
    for (i = MaxSize - 1; i > 0; i--) {
        AdjustDown(S, 0, i);
        swap(S.data[0], S.data[i-1]);
//        PrintS(S);
    }
}

int main() {
//    ElemType A[MaxSize] = {12, 63, 58, 95, 41, 35, 65, 0, 38, 44};
    Sequence S;
    InitS(S);
//*
//    memcpy(S.data, A, sizeof(A));
//*
    int i;
    ElemType x;
    ElemType A[MaxSize];
    for (i = 0; i < MaxSize; i++) {
        scanf("%d", &x);
        S.data[i] = x;
    }
    memcpy(A, S.data, sizeof(A));
//*
    SelectSort(S);
    PrintS(S);
//*
    memcpy(S.data, A, sizeof(A));
//*
    HeapSort(S);
    PrintS(S);
    return 0;
}//12 63 58 95 41 35 65  0 38 44
