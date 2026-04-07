#include<iostream>
using namespace std;
const int Max =5;

int main()
{   
    int golf[Max];
    cout<<"enter you golf scores\n";
    cout<<"you must enter "<<Max<<" round of golf\n";
    int i=0;
    for(i;i<Max;i++)
    {
        cout<<"round #"<<i+1<<":";
        while(!(cin>>golf[i]))
        {
            cin.clear();
            while(cin.get() != '\n')
            
            continue;
            cout<<"please enter a number: ";
            

        }

    }


    double sum=0.0;
    for(int i=0;i<Max;i++)
    {
        sum+=golf[i];
    }
    cout<<"the sum of your golf scores is: "<<sum<<endl;
    
    return 0;
}