#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int n,k;
    cin>>n>>k;
    double numofk=0;
    double numofnotk=0;
    int p,q;
    p=q=1;
   
    for(int i=1;i<n+1;i++)
    {
        if(i%k==0)
        { 
            numofk=(numofk*(p-1)+i)/p;
            p++;
        }
        
        else
        {
            
            numofnotk=(numofnotk*(q-1)+i)/q;
            q++;
        }
    }
    cout<<setprecision(1)<<fixed<<numofk<<endl;
    cout<<setprecision(1)<<fixed<<numofnotk<<endl;

    return 0;
}