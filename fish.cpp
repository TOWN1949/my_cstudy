#include<iostream>

using namespace std;
int main (){
int x, n;
cin>>x>>n;
int total=0;
for(int i=0;i<n;i++)
{
    if((x+i)%7!=0 && (x+i)%7!=6)
    {
        total+=250;
    }
}
 cout<<total;








    return 0;
}