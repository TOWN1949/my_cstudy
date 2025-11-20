#include<iostream>

using namespace std;
int main (){
int x, n;
cin>>x>>n;
int s1=n/7*250*5;
int n1=n%7;
int x1=(x+n1)%7;
if(1<=x1 && x1<=5)cout<<s1+n1*250;
else if(x1==6)cout<<s1+(n1-1)*250;
else cout<<s1+(n1-2)*250;
 








    return 0;
}