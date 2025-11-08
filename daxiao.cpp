#include<iostream>
using namespace std;


int main()
{
    int n;
    int max,min;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int p=0;p<n-1;p++)
    {
         max= arr[p]>=arr[p+1]?arr[p]:arr[p+1];
         max= max>=arr[p+1]?max:arr[p+1];
         min= arr[p]<arr[p+1]?arr[p]:arr[p+1];
         min= min<=arr[p+1]?min:arr[p+1];
    }
cout<<max<<" "<<min;


 
    return 0;
}