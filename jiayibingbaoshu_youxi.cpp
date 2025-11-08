#include<iostream>
using namespace std;

bool shouldskip(int num)
 {
  if(num%7==0)
  {return true;}

  int temp=num;
  while(temp>0)
  {
    if(temp%10==7)
    {return true;}

    temp/=10;
  }
  return false;
 }

int main()
{   int n;
  cin>>n;
   int skipnum[4]={0};
   int currentnum=1;
   int vaildnum=0;//you xiao shu zi
   int personindex=0;//bao shu ren shu

   for(;vaildnum<n;personindex=(personindex+1)%4,currentnum++)
   {
    if(shouldskip(currentnum)){
      skipnum[personindex]++;

    }

    else
    {
      vaildnum++;
    }
   }
cout<<skipnum[0]<<endl;
cout<<skipnum[1]<<endl;
 cout<<skipnum[2]<<endl;   
   cout<<skipnum[3]<<endl; 
   

    return 0;
}