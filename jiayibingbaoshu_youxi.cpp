#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;//yu qi shu zi
    int count=0;//you xiao shu zi
    int ignore_num=0;//wu xiao shu zi
    for(int i=0;i<4;i++)//zhi xing si lun cao zuo
    {
        for(int j=1;j<=n+ignore_num;j+=4)//dan ren du qu shu zi
        {
          if(!(j%7==0 || j%10==7))
          {
            count++;
            ignore_num=0;
          }
          else
            {
                ignore_num=1;
            }

            
        }
cout<<ignore_num<<endl;
    }
   
    
    
   

    return 0;
}