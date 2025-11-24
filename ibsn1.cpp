#include<iostream>
using namespace std;
int main (){
  string node;
  cin>>node;
 
int sum=(node[0]-48)+(node[2]-48)*2+
(node[3]-48)*3+(node[4]-48)*4+
(node[6]-48)*5+(node[7]-48)*6+
(node[8]-48)*7+(node[9]-48)*8+(node[10]-48)*9;

int checksum=sum%11;

  if(checksum==node[12]-48) 
  {
    cout<<"Right";
  }
  else if(checksum==10 && node[12]=='X') cout<<"Right";
  else
 {
    if(sum%11==10)
    {
        node[12]='X';

        for(int i=0;i<13;i++)

        {
            cout<<node[i];
        }    
        
    }    
    else
    {
       node[12]=sum%11+48;
         for(int i=0;i<13;i++)
          {
                cout<<node[i];
          }
    }
  }

    return 0;

}