#include<iostream>
using namespace std;
void huidiao(int result){
    cout<<"The result is: "<<result<<endl;
}

void fun(int a,int b,void(*huidiao)(int)){

    int result=a+b;
    huidiao(result);
}