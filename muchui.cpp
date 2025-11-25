#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int a;
    cin>>a;
    int count=1;
    while(a>1)
    {
        if(a%2==0)
        {
            a=a/2;
            count++;
        }
        else
        {
            a=(floor)(a/2);
            count++;
        }
    }
    cout<<count;
    return 0;
}