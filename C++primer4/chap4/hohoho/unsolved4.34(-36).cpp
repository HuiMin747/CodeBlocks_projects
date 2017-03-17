//编写程序读入一组 string 类型的数据，并将它们存储在
//vector 中。接着，把该 vector 对象复制给一个字符指
//针数组。为 vector 中的每个元素创建一个新的字符数
//组，并把该 vector 元素的数据复制到相应的字符数组
//中，最后把指向该数组的指针插入字符指针数组。
#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string s;
    vector<string>  svec;
    while(cin>>s)
    {
        svec.push_back(s);
    }

    //创建字符指针数组
    const  unsigned int arr_size=100;  //这里定义为字符指针的个数
    char * arry[arr_size+1];
    if(svec.size()>arr_size)
    {
        cout<<"Overflow!"<<endl;
        return -1;
    }
    int ix=0;
    for(vector<string>::size_type i=0;i<=svec.size()-1;i++,ix++)    //vector的下标类型   vector<string>::size_type
    {
        arry[ix]=&svec[i];
    }
    return 0;
}
