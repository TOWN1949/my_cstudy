#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,p,q;
    cin>>n>>p>>q;
    int A=min({p,q,n});
    int C=max({n,p,q});
    int B=(n+p+q)-A-C;
    string str;
    cin>>str;
    if(str.length()!=3)
    {
        return 0;
    }
    
    switch (str[0])
    {
        case 'A':
            if(str=="ABC")cout<<A<<" "<<B<<" "<<C;
            if(str=="ACB")cout<<A<<" "<<C<<" "<<B;
            break;
        case 'B':
            if(str=="BAC")cout<<B<<" "<<A<<" "<<C;
            if(str=="BCA")cout<<B<<" "<<C<<" "<<A;
            break;

        case 'C':
            if(str=="CAB")cout<<C<<" "<<A<<" "<<B;
            if(str=="CBA")cout<<C<<" "<<B<<" "<<A;
            break;

        default:
            break;        
    }




    return 0;
}