#include<iostream>
using namespace std;
int isprime(int x,int primes[],int limit);
int main()
{
    const int number=100;
    int primes[number]={2};
    int count=1;
    int i=3;
    while(count<number)
    {
        if(isprime(i,primes,count))
        {
            primes[count++]=i;
            
        }
        i++;
    }

for(int j=0;j<number;j++){
    cout<<primes[j];

    while(j%5==0)
    {
        cout<<endl;
    }


}




    return 0;
}

int isprime(int x,int primes[],int limit)
{
    int ret=1;
    int i;
    for(i=0;i<limit;i++)
    {
        if (x%primes[i]==0)
        {

            ret=0;
            break;
        }
    }
    return ret;
}