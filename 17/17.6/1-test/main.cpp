#include <stdio.h>
#include <stdlib.h>

#define N 10
typedef int ElemType;

void PrintA(ElemType *A) {
    for (int i = 0; i < N; i++) {
        printf("%3d", A[i]);
    }
}

void Merge(ElemType *A, int low, int mid, int high) {
    static ElemType B[N];
    int i, j, k;
    for (i = 0; i < N; i++) {
        B[i] = A[i];
    }

    for (i = low, j = mid + 1, k = low; i <= mid && j <= high;) {
        if (B[i] > B[j]) {
            A[k] = B[j];
            j++;
            k++;
        } else {
            A[k] = B[i];
            i++;
            k++;
        }
    }
    while(i<=mid)
    {
        A[k] = B[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        A[k] = B[j];
        j++;
        k++;
    }
}

void MergeSort(ElemType *A, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main() {
    ElemType A[N];
    ElemType x;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        A[i] = x;
    }

    MergeSort(A, 0, N - 1);
    PrintA(A);
    return 0;
}//12 63 58 95 41 35 65  0 38 44

