#include<iostream>
#include<string>
std::string getname(void);
int main()
{
    std::cout<<"enter your first name:"<<std::endl;
    std::string name1=getname();
    std::cout<<"enter your last name:"<<std::endl;
    std::string name2=getname();
    std::cout<<"your name is:"<<name1<<" "<<name2<<std::endl;









    return 0;
}
std::string getname(void)
{
    std::string temp;
    std::getline(std::cin, temp);
    return temp;
}