#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=3;
    int sum=0;
    if(n<num)cout<<"0";
    else
    {
        for(int i=1;i<=n/3;i++)
        {
            sum+=num*i;

        }
    }
    cout<<sum;

    return 0;
}