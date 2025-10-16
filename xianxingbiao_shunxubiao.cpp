#include<iostream>
using namespace std;

//此处默认线性表之中Maxsize=100，如果失去本行代码，程序不能正常初始化。
#define Maxsize 100
typedef int ElemType;

//线性表的定义
typedef struct
{
    ElemType data[Maxsize];
    int length;
}SqList;

//建立顺序表
void CreateList(SqList * &L,ElemType a[],int n)
{
    int i=0,k=0;
    L=(SqList *)malloc(sizeof(SqList));
    while(i<n)
    {
        L->data[k]=a[i];
        k++;
        i++;
    }
    L->length=k;

}

//初始化线性表
void InitList(SqList * &L)
{
    L=(SqList *)malloc(sizeof(SqList));
    L->length=0;
}

//销毁线性表
void DestroyList(SqList * &L)
{
    free(L);//连续空间直接free
}

//判断空表
bool ListEmpty(SqList *L)
{
    return(L->length);
}

//求线性表长度
int ListLength(SqList *L)//使用指针是为了节省内存
{
    return(L->length);
}



//输出线性表
void DispLost(SqList *L)
{
    for(int i=0;i<L->length;i++)//i从零开始是因为这里对应的是物理位序
    {
        cout<<L->data[i];
    }
}


















int main()
{
    






    return 0;
}