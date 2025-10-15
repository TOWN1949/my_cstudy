#include<iostream> 
using namespace std;
int main()
{
    int f1=1,f2=1;
    int f3;
    int i=2;

    cout<<f1<<" "<<f2<<" ";

    while(i<30)
    {
        f3=f1+f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
        f3=f1+f2;
        i++;
        if(i%6==0)
        {
            cout<<endl;
        }   
    }




    return 0;
}