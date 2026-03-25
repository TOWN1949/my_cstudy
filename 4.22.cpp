#include<iostream>
using namespace std;
#include<cstring>
char *getname(void);

int main()


{

    char *name;
    name=getname();
    cout<<"your name is:"<<name<<endl;
    cout<<name<<" at address: "<<(int *)name<<endl;
    delete [] name;
    return 0;
}

char *getname(void)
{
   char  temp[80];
   cout<<"enter ur name:";
   cin>>temp;
   char *pn=new char [strlen(temp)+1];
   strcpy(pn,temp);
   return pn;
}