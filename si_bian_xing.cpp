#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int a,b,c,d;
    int max1;
    cin>>a>>b>>c>>d;
    max1=max({a,b,c,d});
    if(max1<a+b+c+d-max1)cout<<"yes";
    else cout<<"no";







    return 0;
}