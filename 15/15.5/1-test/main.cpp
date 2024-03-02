#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct BiNode {
    ElemType key;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void BST_Insert(BiTree &T, ElemType key) {
    if (T == NULL) {
        T = (BiTree) calloc(1, sizeof(BiNode));
        T->key = key;
        return;
    }
    if (key < T->key) {
        BST_Insert(T->lchild, key);
    } else {
        BST_Insert(T->rchild, key);
    }
}

void InOrder(BiTree T) {
    if (T == NULL) {
        return;
    }
    InOrder(T->lchild);
    printf("%3d", T->key);
    InOrder(T->rchild);
}

void Save(BiTree T, ElemType *S, int &index) {
    if (T == NULL) {
        return;
    }
    Save(T->lchild, S, index);
    S[index++] = T->key;
    Save(T->rchild, S, index);
}

void BinarySearch(ElemType *S, ElemType key, int &pos) {
    int low = 0;
    int high = 9;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key < S[mid]) {
            high = mid - 1;
        } else if (key > S[mid]) {
            low = mid + 1;
        } else {
            pos = mid;
            break;
        }
    }
}

int main() {
    ElemType x;
    BiTree T = NULL;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x);
        BST_Insert(T, x);
    }
    InOrder(T);
    printf("\n");
    ElemType S[10];
    int index = 0;
    Save(T, S, index);
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", S[i]);
//    }
    ElemType key = 21;
    int pos;
    BinarySearch(S, key, pos);
    printf("%d", pos);
    return 0;
}//87  7 60 80 59 34 86 99 21  3
