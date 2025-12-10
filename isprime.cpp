#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n);
int main()
{
    int x;
    cin>>x;
    if(isPrime(x))
        cout<<"Prime";
    else
        cout<<"Not Prime";



    return 0;
}

int isPrime(int n)
{
    int ret=1;
    if (n==1)ret=0;
    if(n%2==0 && n!=2)ret=0;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            ret=0;
            break;
        }
    }
    return ret;
}