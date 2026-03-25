#include<iostream>
#include<cstring>
using namespace std;
int main()
{   char animal[20]="bear";
    const char *bird="wren";
    char *ps;
    cout<<animal<<" and "<<bird<<endl;

    //cout<<ps;指针没有指向任何位置，得到的值是一个垃圾值。


    cout<<"enter a kind of animal:";
    // cin>>bird;
   // cout<<bird;
//     //cin>>ps;
//     //cout<<ps<<endl;
//    cin>>animal;
//     cout<<animal<<endl;
    
    cin>>animal;
    cout<<animal<<endl;
    ps=animal;
    cout<<ps<<endl;

    cout<<animal<<" at "<< &animal<<endl;
    cout<<ps<<" at "<< &ps<<endl;

    cout<<"ater using strcpy():"<<endl;
    ps=new char[strlen(animal)+1];
    strcpy(ps,animal);
    cout<<animal<<" at "<< &animal<<endl;
    cout<<ps<<" at "<<&ps<<endl;

    delete [ ] ps;







    return 0;
}