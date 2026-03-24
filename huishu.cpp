#include<iostream>
using namespace std;
#include<cmath>

int iszhishu(int x)
{
    int ret=x;
    if(x<2)ret=0;
    else if(x==2)ret=1;
    else if(x%2==0)ret=0;

    for(int i=3;i*i<=x;i+=2)
    {
        if(x%i==0)
        {
            ret=0;
            break;
        }
    }
    return ret;
}


int  ishuishu(int y)
{
   
    int original=y;
    long long reversed=0;
    while(y)
    {
        reversed=reversed*10+y%10;
        y=y/10;
    }
   return (reversed==original)?original:0;
    
}
   
int main()
{
    int a,b;
    cin>>a>>b;
   for(a;a<=b;a++)
    {
        if(ishuishu(a) && iszhishu(a))
        {
            cout<<a<<endl;
        }
    }

    return 0;
}






    
