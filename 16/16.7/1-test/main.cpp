#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MaxSize 10
typedef int ElemType;

typedef struct {
    ElemType *data;
    int Len;
} Sequence;

void swap(ElemType &a, ElemType &b) {
    ElemType c;
    c = a;
    a = b;
    b = c;
}

void BubbleSort(Sequence &S) {
    int i, j, len;
    len = S.Len;
    ElemType *data = S.data;
    for (i = 0; i < len - 1; i++) {
        for (j = len - 1; j > i; j--) {
            if (data[j - 1] > data[j]) {
                swap(data[j - 1], data[j]);
            }
        }
    }
}

int Partition(Sequence &S, int low, int high) {
    int pivotVal = S.data[low];
    while (low < high) {
        while (low < high && S.data[high] >= pivotVal) {
            high--;
        }
        S.data[low] = S.data[high];
        while (low < high && S.data[low] <= pivotVal) {
            low++;
        }
        S.data[high] = S.data[low];
    }
    S.data[low] = pivotVal;
    return low;

}

void QuickSort(Sequence &S, int low, int high) {
    if (low < high) {
        int pivot = Partition(S, low, high);
        QuickSort(S, low, pivot - 1);
        QuickSort(S, pivot + 1, high);
    }
}

void PrintSequence(Sequence S) {
    for (int i = 0; i < S.Len; i++) {
        printf("%3d", S.data[i]);
    }
    printf("\n");
}

void InsertSort(Sequence &S) {
    int i, j;
    ElemType insertVal;
    for (i = 1; i < S.Len; i++) {
//        PrintSequence(S);
        insertVal = S.data[i];
        for (j = i - 1; j >= 0; j--) {
            if (S.data[j] > insertVal) {
                S.data[j + 1] = S.data[j];
            } else {
                break;
            }
        }
        S.data[j + 1] = insertVal;
    }
}

void InitSequence(Sequence &S, int len) {
    S.data = (ElemType *) malloc(len * sizeof(ElemType));
    S.Len = len;
}

void InsertSequence(Sequence &S, int pos, ElemType value) {
    S.data[pos] = value;
}


int main() {
    Sequence S;
    InitSequence(S, MaxSize);
    ElemType x;
    for (int i = 0; i < MaxSize; i++) {
        scanf("%d", &x);
        InsertSequence(S, i, x);
    }
    ElemType A[MaxSize];
    memcpy(A, S.data, sizeof(A));
//    ElemType A[MaxSize] = {12, 63, 58, 95, 41, 35, 65, 0, 38, 44};
//    memcpy(S.data, A, sizeof(A));
    BubbleSort(S);
    PrintSequence(S);
    memcpy(S.data, A, sizeof(A));
    QuickSort(S, 0, MaxSize - 1);
    PrintSequence(S);
    memcpy(S.data, A, sizeof(A));
    InsertSort(S);
    PrintSequence(S);
    return 0;
}//12 63 58 95 41 35 65 0 38 44
