//编写一个小程序，由用户输入两个 string 对象，然后报
//告哪个 string 对象按字母排列次序而言比较小（也就是
//说，哪个的字典序靠前）。继续要求用户输入，直到用户
//请求退出为止。请使用 string 类型、string 类型的小
//于操作符以及 do while 循环实现。
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    //两个string的输入
    string sval;
    string s1,s2;
    cout<<"please input the string1 end with 'quit' "<<endl;
    while(cin>>sval&&sval!="quit")     //cin.get()  参数只能是字符char  作用是不忽略分隔符
    {
        s1=s1+sval+" ";
    }
    cout<<"please input the string2 end with 'quit' "<<endl;
    while(cin>>sval&&sval!="quit")
    {
        s2=s2+sval+" ";
    }
    cout<<"According to the dictionary, the smaller string is:"<<endl;
    cout<<(s1<=s2?s1:s2)<<endl;
     return 0;


}
