#include<iostream>
using namespace std;
#include<cmath>
int isprime(int x)
{
    int ret=1;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            ret=0;
            break;
        }
    }
    return ret;
}

int main()

{
    int L;
    cin>>L;
    int sum=0;
    int count=0;

    
    
        for(int i=2;sum<L;i++)
        {
            if(isprime(i))
            {   
               
                if(sum+i>L)break;
                cout<<i<<endl;
                sum+=i;
                count++;
                
            }
            
        }
        cout<<count<<endl;
        cout<<sum<<endl;
    

    


    return 0;
}