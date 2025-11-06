#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int> a(n);
   int num=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];

   }
   for (int j=0;j<=n-3;j++)
   {
    if((a[j]<a[j+1]&&a[j+1]>a[j+2]) || (a[j]>a[j+1]&&a[j+1]<a[j+2]))
    {
        num++;
    }
   }
 cout<<num<<endl;



    return 0;
}