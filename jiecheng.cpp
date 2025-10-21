#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
   long long sum=1;
    while(N>1)
    {
        sum*=N;
        N--;
    }
    cout<<sum;

    return 0;
}
