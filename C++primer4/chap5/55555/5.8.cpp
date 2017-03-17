//编写表达式判断四个值 a、b、c 和 d 是否满足 a 大于
//b、b 大于 c 而且 c 大于 d 的条件。
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //abcd可以是数字 可以是字符
    string s;
    vector<string> vec;
    while(cin>>s)
    {
        vec.push_back(s);
    }
    if(vec.size()!=4)
    {
        cout<<"a b c d input wrong!"<<endl;
        return -1;
    }

    vector<string>::iterator it=vec.begin();
    if(*it>*(it+1)&& *(it+1)>*(it+2)&&*(it+2)>*(it+3))  //曾经多写了一个it+4导致不可预料的结果    就把it 当成1理解就对了
    {
              cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;

    }
     return 0;
}
