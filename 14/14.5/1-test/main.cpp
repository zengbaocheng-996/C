#include "function.h"

void PreOrder(pTree tree)
{
    if(NULL==tree)
    {
        return;
    }
    printf("%c",tree->data);
    PreOrder(tree->lChild);
    PreOrder(tree->rChild);
}

int main() {
    ElemType c;
    pTree tree = NULL;
    pTag tag = NULL;
    pTag pHead, pTail, pCur;
    while (scanf("%c", &c)) {
        if ('\n' == c) {
            break;
        }
        pTree nNode = (pTree) calloc(1, sizeof(BiTNode));
        nNode->data = c;
        pTag ntag = (pTag) calloc(1, sizeof(Tag));
        ntag->node = nNode;
        if (tree == NULL) {
            tree = nNode;
            tag = ntag;
            pHead = pTail = pCur = tag;
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
    PreOrder(tree);
    return 0;
}//abcdefghij
