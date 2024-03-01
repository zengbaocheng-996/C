#include "function.h"

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
