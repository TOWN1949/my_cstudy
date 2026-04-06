#include <iostream>
using std::cout;
using std::endl;
using std::cin;
const int Max=5;

int main()
{   double fish[Max];
    cout<<"enter the wieght of fish.\n";
    cout<<"you may enter up to "<<Max<<"fish,press q to quit.\n";
    int i=0;
        while(i<Max && cin>>fish[i])
    {
        if(++i<Max)
        {
            cout<<"fish #"<<i+1<<":";

        }
    }


    double total=0.0;
    for(int j=0;j<i;j++)
    {
        total+=fish[j];
    }



    if(0==i)cout<<"no fish";
    else cout<<"the average weight of "<<i<<"fish is "<<total/i<<"pounds.\n";
    

    return 0;
}