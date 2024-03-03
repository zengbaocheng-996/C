#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//存储元素的起始位置
    int TableLen;//元素个数
} SSTable;

void ST_Init(SSTable &ST, int len) {
    ST.TableLen = len;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);//申请一块堆空间，当数组来使用
    int i;
    srand(time(NULL));//随机数生成，每一次执行代码就会得到随机的10个元素
    for (i = 0; i < ST.TableLen; i++) {
        ST.elem[i] = rand() % 100;//生成的是0-99之间
    }
}

void ST_print(SSTable ST) {
    for (int i = 0; i < ST.TableLen; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

//交换两个元素
void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

//往往都是用两层循环
//优先去写内层循环，再写外层循环
void BubbleSort(ElemType *A, int n) {
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {//控制的是有序数的数目
        flag = false;//元素是否发生交换的标志
        for (j = n - 1; j > i; j--) {//内层控制比较和交换
            if (A[j - 1] > A[j]) {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        }
        if(false==flag)//如果一趟比较没有发生任何交换，说明有序，提前结束排序
            return;
    }
}

int main() {
    SSTable ST;
    ST_Init(ST, 10);
//    ElemType A[10] = {64, 94, 95, 79, 69, 84, 18, 22, 12, 78};
//    //内存copy接口，当你copy整型数组，或者浮点型时，要用memcpy，不能用strcpy
//    memcpy(ST.elem, A, sizeof(A));
    ST_print(ST);//随机后的结果打印
    BubbleSort(ST.elem, 10);
    ST_print(ST);//随机后的结果打印
    return 0;
}
