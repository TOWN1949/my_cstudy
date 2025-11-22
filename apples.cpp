#include<iostream>
using namespace std;
int main (){

    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int height;
    cin>>height;
    int count=0;
    for (int j=0;j<10;j++){
        if((height+30)>=arr[j])
        {
            count++;

        }
    }

cout<<count<<endl;
    return 0;
}