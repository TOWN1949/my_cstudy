#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int total=0;
    int big=0;
    int small=0;
    for(int i=1;i<=n;i++)
    {
       if(i<10){if(i==x)total++;} 
       if(i>=10 && i<100)
      {
        big=i/10; 
        small=i%10;
        if(big==x)total++;
        if(small==x)total++;
      }
      else if(i>=100)
      {
        big=i;
        while(big>9)
        {
            small=big%10;
            if(small==x)total++;
            big=big/10;
            if(big==x)total++;
        }

      }
    }


cout<<total;
    
    return 0;
}