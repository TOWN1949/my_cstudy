#include <iostream>
using namespace std;

void mycallback(int result){
    cout<<"result is "<<result<<endl;
}

void process(int a,int b,void(*mycallback)(int)){
    int result=a+b;
    mycallback(result);
}


int main() {

    process(10,20,mycallback);

     
return 0;
}