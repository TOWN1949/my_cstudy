#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(n1<=90)cout<<n1+n2;
    else if(n1+n2>=100)cout<<100;
    else cout<<n1+n2;



    return 0;
}