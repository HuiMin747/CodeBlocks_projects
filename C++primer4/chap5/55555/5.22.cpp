//编写程序输出的每种内置类型的长度。
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    //sizeof是操作符
    cout<<"sizeof(int)"<<sizeof(int)<<endl;
    cout<<"sizeof(unsigned int)"<<sizeof(unsigned int)<<endl;
    cout<<"sizeof(long)"<<sizeof(long)<<endl;
    cout<<"sizeof(long long)"<<sizeof(long long)<<endl;
    cout<<"sizeof(float)"<<sizeof(float)<<endl;
    cout<<"sizeof(double)"<<sizeof(double)<<endl;
    cout<<"sizeof(char)"<<sizeof(char)<<endl;
    cout<<"sizeof(short)"<<sizeof(short)<<endl;


    char array[20];
    cout<<"sizeof(char array[20])"<<sizeof(array)<<endl; //求数组有多少元素
    cout<<"sizeof(char array[20])"<<sizeof(array[20])<<endl;  //数组的某一个元素的大小

    const char * str="I love u";
    cout<<"sizeof(const char * str)"<<sizeof(str)<<endl;  //C风格字符串     那个指针是多大
    cout<<"sizeof(const char * str)"<<strlen(str)<<endl;  //C风格字符串处理函数  需要include cstring    纯纯的C风字符串长度 不带\0
    return 0;
}
