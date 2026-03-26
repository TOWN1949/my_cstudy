
#include <iostream>
struct Candybar
{
    std::string brand;
    double weight;
    int calories;
};
int main()
{
    Candybar snack={"Mocha Munch",2.3,350};
        std::cout<<"brand:"<<snack.brand<<std::endl;
        std::cout<<"weight:"<<snack.weight<<std::endl;
        std::cout<<"calories:"<<snack.calories<<std::endl;
        return 0;
}