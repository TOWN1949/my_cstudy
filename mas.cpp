#include<iostream>
using namespace std;

int main(){

    int cnt=0;
    int n;
    cin>>n;


    int a[n];

    int store=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]-1){
            cnt++;}
        else {
            store=max(store,cnt);
            cnt=0;    
        }
    }
    store
=max(store,cnt);
    cout<<store+1<<endl;


       return 0;
}
    

 
