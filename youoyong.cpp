#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    float sum=0;
    float a=2;
    float s;
    cin>>s;
    for(cnt=1;sum<s;cnt++)
    {
        sum+=a;
        a*=0.98;

    }
cout<<cnt-1;

    return 0;
}