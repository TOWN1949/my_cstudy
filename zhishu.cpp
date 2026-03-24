#include<iostream>
using namespace std;
int iszhishu(int n){
    int ret;
    ret=1;
    for(int i=2;i*i<=n;i++){
    if(n%i==0)ret=0;
    break;    }

return ret;}

int main(){

    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){

    if(iszhishu(i)&&n%i==0)cout<<n/i;
    break;}



return 0;}