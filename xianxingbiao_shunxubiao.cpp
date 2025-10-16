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
void DispList(SqList *L)//使用void来输出是因为这个地方不需要计算机去理解，只是简单的打印即可
{   for(int i=0;i<L->length;i++)//i从零开始是因为这里对应的是物理位序
    {
        cout<<L->data[i];
    }
}

//求线性表之中的元素并且使用e接收,返回线性表之中某个元素的值
 bool GetElem(SqList *L,int i,ElemType &e)//提问：为什么使用e接收元素使用的不是显示用的void，而是bool？？？
 {
    if(i<1||i>L->length)return false;//i是逻辑位序
    e=L->data[i-1];//此处要减一，因为是逻辑位序转物理位序
    return true;
 }

 //按照元素的值查找元素，并且使用e接收
 int LocataElem(SqList * L,ElemType e)
 {
    int i=0;//物理位序
    while(i<L->length&&L->data[i]!=e)
    {
        i++;
    }
    if(i>=L->length)return 0;
    else return(i+1);//逻辑位序
 }

 //在线性表之中插入元素
 bool ListInsert(SqList * &L,int i,ElemType e)//创建空间使用引用，i是逻辑位序
 {
    int j;
    if(i<1||i>L->length+1)//只有第零个位置以及length+1的位置不可以插入
        return false;
 }



















int main()
{
    






    return 0;
}