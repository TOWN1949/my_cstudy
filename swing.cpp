#include<iostream>
using namespace std;

int mian()
{
    int cnt=0;
    int sum=0;
    int a=2;
    int s;
    cin>>s;
    for(cnt=1;sum<s;cnt++)
    {
        sum+=a;
        a*=0.98;

    }

    return 0;
}