#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    int original=N;
    long long reversed=0;
    while(N)
    {
        reversed=reversed*10+N%10;
        N=N/10;
    }
cout<<reversed<<endl;

    return 0;
}