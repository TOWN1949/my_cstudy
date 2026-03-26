#include<iostream>
struct Candybar
{
    std::string brand;
    double weight;
    int calories;
};
int main()
{
    Candybar*p=new Candybar;
    *p={"Moncha Munch",2.3,350};
    std::cout<<"brand:"<<p->brand<<std::endl;
    std::cout<<"weight:"<<p->weight<<std::endl;
    std::cout<<"calories:"<<p->calories<<std::endl;
    delete p;
    return 0;


}