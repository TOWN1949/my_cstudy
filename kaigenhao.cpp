#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0.0;
    double a = 81.0;
    
    for(int i = 1; i < n; i++)
    {
        a = sqrt(a);  
        sum += a;
    }
    sum += 81.0;  
    cout << setprecision(6) << fixed << sum;  
    return 0;
}