#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main()
{
    double n;
    cin>>n;
    double result=0;
    result=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);

    cout<<setprecision(2)<<fixed<<result<<endl;

    return 0;
}