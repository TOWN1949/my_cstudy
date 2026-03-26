#include<iostream>
#include<array>

int main()
{   std::array<float,3>arr;
    std::cin>>arr[0]>>arr[1]>>arr[2];
    std::cout<<(arr[1]+arr[2]+arr[0])/3.0;
    



    return 0;
}