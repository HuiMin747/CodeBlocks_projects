//编写程序比较两个 string 类型的字符串，然后编写另一
//个程序比较两个 C 风格字符串的值。
#include<iostream>
#include<string>
#include<cstring>   //为了使用C风格字符串的操作函数   strcopy  strcmp之类的
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1("I love u !"),s2("My baby~");
    if(s1>s2)
    {
        cout<<"s1 is bigger than s2"<<endl;
    }
    else
    {
        cout<<"s1 is smaller than s2"<<endl;
    }

//    const char *c1="I love u !";   //C风格字符串的定义类型有两种
//    char c2[]="My baby~";
//    int isBig=strcmp(c1,c2);   //比较函数的参数是两个指针
//    cout<<isBig<<endl;

    //在C++环境下处理C风格字符串的输入输出
    char * str1,*str2;
    int str_size=50;
    //动态分配内存！！！！   对指针操作
    str1=new char[str_size];    //不如每次操作的时候就把delete一起都写上
    str2=new char[str_size];
    //字符串的动态输入             对指针操作
    cin>>str1;
    cin>>str2;
    //排错
    if(strlen(str1)==0||strlen(str2)==0)
    {
        cout<<"No cstring?"<<endl;
        return -1;
    }
    //比较字符串的大小
    int isBigger=0;
    isBigger=strcmp(str1,str2);
    if(isBigger<0)
        {cout<<"str1 is smaller than s2"<<endl;}
    else if(isBigger>0)
        {cout<<"st1 is bigger than s2"<<endl;}
    else
        {cout<<"str1 is  equal to s2"<<endl;}


    //非常重要！！！！！！！！！！！！！！
    delete [] str1;
    delete [] str2;

    return 0;
}
