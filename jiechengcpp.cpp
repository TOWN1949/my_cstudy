#include<iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long total=1;
    long long final=0;
    for(int i=1;i<=n;i++)
    {
        total=1;
       for(int j=1;j<=i;j++)
       {
        
        total*=j;
        
       }
       final+=total;
    }
    
    cout<<final;
    return 0;
}