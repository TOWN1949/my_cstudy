#include<iostream>
using namespace std;
int min(int a[],int len);
int max(int a[],int len);






int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    int len=n;
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}

cout<<max(a,len)-min(a,len);
    delete[]a;
    return 0;
}








int max(int a[],int len)
{
    int big=a[0];
    for(int i=0;i<len;i++)
    {
        big= (big>a[i])?big:a[i];
    }
    return big;
}

int min(int a[],int len)
{
    int small=a[0];
    for(int i=0;i<len;i++)
    {
        small= (small<a[i])?small:a[i];
    }
    return small;
}