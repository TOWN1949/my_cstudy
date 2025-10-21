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
    
    for(int i = 0; i < n; i++)
    {
        a = sqrt(a);  // 保留高精度中间结果，不提前四舍五入
        sum += a;
    }
    sum += 81.0;  // 加上初始值
    cout << setprecision(6) << fixed << sum;  // 输出时格式化到6位小数
    return 0;
}