#include<stdio.h>
#include<stdlib.h>

#define N 7
typedef int ElemType;

//合并两个有序数组
void Merge(ElemType *A, int low, int mid, int high) {
    static ElemType B[N];//加static的目的是无论递归调用多少次，都只有一个B[N]
    int i, j, k;
    for (i = low; i <= high; i++)//把A[i]里的元素都给B[i]
    {
        B[i] = A[i];
    }
    k=low;
    for(i=low,j=mid+1;i<=mid&&j<=high;)//合并两个有序数组
    {
        if(B[i]<B[j])
        {
            A[k]=B[i];
            i++;
            k++;
        }
        else
        {
            A[k]=B[j];
            j++;
            k++;
        }
    }
    //把某一个有序数组中剩余的元素放进来
    while(i<=mid)
    {
        A[k]=B[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        A[k]=B[j];
        j++;
        k++;
    }
}

//归并排序不限制是两两归并，还是多个归并
void MergeSort(ElemType A[], int low, int high)//递归分割
{
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);//排序好前一半
        MergeSort(A, mid + 1, high);//排序好后一半
        Merge(A, low, mid, high);//将两个排序号的数组合并
    }
}
void print(ElemType *A)
{
    for(int i = 0;i<7;i++)
    {
        printf("%3d",A[i]);
    }
    printf("\n");
}
//归并排序
int main() {
    int A[7] = {49, 38, 65, 97, 76, 13, 27};
    MergeSort(A, 0, 6);
    print(A);
    return 0;
}