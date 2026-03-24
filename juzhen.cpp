#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*n;i++)
    {
        if(i<10){cout<<"0"<<i;}
        if(i>=10){cout<<i;}
        if(i%n==0){cout<<endl;}
        
        
    }

    int cnt=1;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
    
        cout<<"  ";

        for(int j=0;j<i;j++)
        {
            cout<<setw(2)<<setfill('0')<<cnt++;
        }
        cout<<endl;
    }

return 0;}