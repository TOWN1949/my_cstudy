#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> total;
    total.push_back(1);
    vector<int> final;
    final.push_back(0);
    for(int i=1;i<=n;i++)
    {
        total=1;
       for(int j=1;j<=i;j++)
       {
        
        total*=j;
        
       }
       final+=total;
    }
    
    cout<<final;
    return 0;
}