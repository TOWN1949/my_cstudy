#include <iostream>
#include<algorithm>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int maxsize=max({a,b,c});
    int minsize=min({a,b,c});
    int big=maxsize;
    int small=minsize;
    int leftnum=0;
    while(big%small!=0){
        
        leftnum=big%small;
        big=small;
        small=leftnum;
    }
    cout<<minsize/small<<"/"<<maxsize/small;

    return 0;
}