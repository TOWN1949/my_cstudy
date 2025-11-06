// #include<iostream>
// using namespace std;

// int main()
// {
//     // 演示cin：读取单个字符，跳过空白字符
//     cout << "=== cin 演示 ===" << endl;
//     cout << "请输入一个字符: ";
//     char a;
//     cin >> a;
//     cout << "cin读取的字符: " << a << endl;
    
//     // 清除输入缓冲区中的换行符
//     cin.ignore(100, '\n');
    
//     // 演示cin.get()：读取单个字符，包括空白字符
//     cout << "\n=== cin.get() 演示 ===" << endl;
//     cout << "请输入一个字符(可以输入空格或换行): ";
//     char b;
//     cin.get(b);
//     cout << "cin.get()读取的字符: " << b << " (ASCII: " << (int)b << ")" << endl;
    
//     // 清除输入缓冲区
//     cin.ignore(100, '\n');
    
//     // 演示cin.getline()：读取整行字符串
//     cout << "\n=== cin.getline() 演示 ===" << endl;
//     cout << "请输入一行文本: ";
//     char line[100];
//     cin.getline(line, 100);
//     cout << "cin.getline()读取的整行: " << line << endl;
    
//     // 综合比较演示
//     cout << "\n=== 综合比较演示 ===" << endl;
//     cout << "请连续输入: 1(空格)2(回车)3: ";
    
//     char c1, c2, c3;
//     // cin会跳过空格
//     cin >> c1;
//     // cin.get()不会跳过任何字符
//     cin.get(c2);  
//     cin.get(c3);
    
//     cout << "cin读取: '" << c1 << "' (跳过空格)" << endl;
//     cout << "第一个cin.get读取: '" << c2 << "' (ASCII: " << (int)c2 << ")" << endl;
//     cout << "第二个cin.get读取: '" << c3 << "'" << endl;
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    // 首先，同一个cpp程序之中公用一个缓冲区，意味着三种cin同时使用的时候需要清楚遗留的无关字符
    
    cout<<"=== cin 演示 ==="<<endl;
    cout<<"请输入一个字符: ";
    char a;
    cin>>a;
    cout<<"cin读取的字符: "<<a<<endl;
// 方法1：读取缓冲区剩余字符
    cout << "\n=== 方法1：逐个读取剩余字符 ===" << endl;
    char remaining[100];
    cin.getline(remaining,99);  // 读取空格
    cout << "剩余字符(空格): '" << remaining << endl;



    return 0;
}