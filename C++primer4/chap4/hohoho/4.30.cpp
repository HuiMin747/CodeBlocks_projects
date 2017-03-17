//编写程序连接两个 C 风格字符串字面值，把结果存储在一
//个 C 风格字符串中。然后再编写程序连接两个 string 类
//型字符串，这两个 string 类型字符串与前面的 C 风格字
//符串字面值具有相同的内容。

#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main()
{
    //C风格字符串的连接
    const int str_size=50;
    char  str1[str_size*2]="I am a good";
    char * str2="boy!";

    //连接两个C风格字符串
    strcat(str1,str2);
    cout<<str1;


//    //string
//    string s1,s2;
//    getline(cin,s1);
//    getline(cin,s2);
//    cout<<s1+s2;









   delete [] str2;
    return 0;
}
