#include <iostream>
#include<string>

using namespace std;

int main()
{
   string  s1;

//   cin>>s1;     //只输出第一个词，遇到空格就不输出了
//   cout<<s1;

//   while(cin>>s1)     //忽略空格   回车就能结束输入
//   {
//       cout<<s1;
//   }

    while(getline(cin,s1))   //识别空格   遇到回车就结束输入
    {
        int i=0;

        cout<<s1;
    }
    return 0;
}
