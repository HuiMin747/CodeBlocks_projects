//编写程序从标准输入设备读入字符串，并把该串存放在字
//符数组中。描述你的程序如何处理可变长的输入。提供比
//你分配的数组长度长的字符串数据测试你的程序。
#include<iostream>

using namespace std;

int main()
{
    char  * str;
    const int arr_size=50;   //const过得值必须初始化
    str=new char[arr_size];
    while(cin>>str)
    {
        cout<<str<<"  ";
    }

    delete [] str;
    return 0;
}
