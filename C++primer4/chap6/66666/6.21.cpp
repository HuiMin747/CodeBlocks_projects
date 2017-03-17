//编写程序从标准输入读入一系列 string 对象，直到同一
//个单词连续出现两次，或者所有的单词都已读完，才结束
//读取。请使用 while 循环，每次循环读入一个单词。如
//果连续出现相同的单词，便以 break 语句结束循环，此
//时，请输出这个重复出现的单词；否则输出没有任何单词
//连续重复出现的信息。
//修改习题的程序，使得它只寻找以大
//写字母开头的连续出现的单词。
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string currs,pres; //当前读入的string
    while(cin>>currs)
    {
        if(currs==pres&&isupper(pres[0]))
        {
            cout<<currs;

        }
        pres=currs;
    }
//    cout<<"No same string"<<endl;
//     return 0;
}
