#include<iostream>
using namespace std;
int main()
{
    int money,a1,a2;
    cin>>money;
    if(money<250)a1=money*0.01;
    else if(money<500)a1=money*0.02;
    else if(money<1000)a1=money*0.05;
    else if(money<2000)a1=money*0.08;
    else if(money<3000)a1=money*0.10;
    else a1=money*0.12;

    if(money<200)a2=0;
    else if(money<400)a2=12;
    else if(money<800)a2=30;
    else if(money<1600)a2=75;
    else if(money<2400)a2=175;
    else if(money<3000)a2=280;
    else a2=375;

    if (a1==a2)cout<<a1<<" "<<"0";
    else if(a1>a2)cout<<a1 <<" "<<1;
    else cout<<a2<<" "<<2;


    
    return 0;
}