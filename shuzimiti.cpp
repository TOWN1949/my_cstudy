#include<iostream>
using namespace std;
int main()
{
    int n=0,k;
    double total=0;
    cin>>k;
    while(total<=k)
    {
        n++;
        total+=1.0/n;
    }
cout<<n;
    return 0;
}