#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int x,int KnowPrimes[],int numberofKnowPrimes);
int main()
{
    const int number=100;
    int knowPrimes[number]={2};
    int cout =1;
    int i=3;
    while (cout<number)
    {
        if()
    }


    return 0;
}

int isPrime(int x,int KnowPreimes[],int numberofKnow)
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