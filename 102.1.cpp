#include<iostream>
#include<string>
int main()
{
    std::cout<<"what is ur forst name?"<<std::endl;
    std::string name;
    std::getline(std::cin,name);
    std::cout<<name;
    return 0;
}