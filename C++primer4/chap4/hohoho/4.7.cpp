//编写必要的代码将一个数组赋给另一个数组，然后把这段
//代码改用 vector 实现。考虑如何将一个 vector 赋给另
//一个 vector。

#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
//    //将一个数组赋值给另一个数组
//    const size_t array_size=10; //数组的下标的类型是size_t而且数组的下标必须是常量  所以用const
//    string as[array_size],as2[array_size];
//    for(size_t i=0;i!=array_size;i++)
//    {
//        cin>>as[i];
//        as2[i]=as[i];
//        cout<<as2[i]<<"   ";
//        if((i+1)%4==0)
//            cout<<endl;
//    }

    vector<string> svec(10,"love");
    vector<string> svec2(svec);
    int count=0;
    for(vector<string>::iterator it=svec.begin();it!=svec.end();it++)
    {
        cout<<*it<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }

    int count2=0;
     for(vector<string>::iterator it=svec2.begin();it!=svec2.end();it++)
    {
        cout<<*it<<"   ";
         count2++;
        if(count2%5==0)
            cout<<endl;
    }
    return 0;
}
