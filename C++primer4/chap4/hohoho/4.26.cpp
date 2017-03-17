//编写程序从标准输入设备读入一个 string 类型的字符
//串。考虑如何编程实现从标准输入设备读入一个 C 风格
//字符串。

#include<iostream>
#include<string>

using namespace std;
int main()
{
    //string从标准输入设备读入
    string s;
    cin>>s;
    cout<<s;

    //C风格字符串从输入端输入输出的两种方式

    //1.指定字符串长度
    const int str_size=50;
    char str[str_size];
    cin>>str;
    cout<<str;

    //2.动态数组
    char *str;
    const int str_size=50;
    str=new char[str_size];
//    cin>>str;     //cin依然对空格敏感
//    cout<<str;

    while(cin>>str)
    {
        cout<<str<<" ";
    }
    delete [] str;

    return 0;
}
