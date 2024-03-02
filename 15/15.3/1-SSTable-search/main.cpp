#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;//整型指针，申请的堆空间的起始地址存入elem
    int TableLen;//存储动态数组里边元素的个数
} SSTable;

void ST_Init(SSTable &ST, int len) {
    //多申请了一个位置，为了存哨兵，不使用哨兵也可以
    ST.TableLen = len + 1;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);
    srand(time(NULL));//随机数生成
    for (int i = 1; i < ST.TableLen; i++) {
        ST.elem[i] = rand() % 100;//为了随机生成的数都在0到99之间
    }
}

//打印顺序表
void ST_print(SSTable ST) {
    int i;
    for (i = 1; i < ST.TableLen; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

int Search_Seq(SSTable ST, ElemType key) {
    ST.elem[0] = key;//让零号元素作为哨兵，有了这个，我们在循环时，可以少写一个i>=0判断
    int i;
    for(i=ST.TableLen-1;ST.elem[i]!=key;--i)
    {

    }
    return i;
}

//顺序查找
int main() {
    SSTable ST;
    ST_Init(ST, 10);
    ST_print(ST);
    ElemType key;
    printf("please input search key\n");
    scanf("%d", &key);
    int pos;//存储查询元素的位置
    pos = Search_Seq(ST, key);
    if (pos) {
        printf("find success %d\n", pos);//从后往前找，找到了，i就是刚好是对应的位置
    } else {
        printf("not find");
    }
    return 0;
}
