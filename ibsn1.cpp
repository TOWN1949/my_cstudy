#include<iostream>
using namespace std;
int main (){
  string node;
  cin>>node;
  if(node.length()!=13) return 0;
  if(node[1]!='-'||node[5]!='-'||node[11]!='-') return 0;

int sum=(node[0]-48)+(node[2]-48)*2+(node[3]-48)*3+(node[4]-48)*4+
(node[6]-48)*5+(node[7]-48)*6+(node[8]-48)*7+(node[9]-48)*8+(node[10]-48)*9;

  if(sum%11==node[12]) 
  {
    cout<<"Right";
  }
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
       node[12]=sum%11;
         for(int i=0;i<13;i++)
          {
                cout<<node[i];
          }
   }


    return 0;
}
}