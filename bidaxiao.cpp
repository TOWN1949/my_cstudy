#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int min_num=99999999;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        min_num= temp<min_num?temp:min_num;
    }
    cout<<min_num;

    return 0;
}