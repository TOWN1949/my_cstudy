#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<=1)return 0;
    int x,y,max=0;
    cin>>x;
    
    for(int i=0;i<n-1;i++)
    {
        cin>>y;
        if(abs(x-y)>max)max=abs(x-y);
        x=y;
    }

cout<<max<<endl;
    return 0;
}