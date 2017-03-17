//给出两个 int 型的 vector 对象，编写程序判断一个对
//象是否是另一个对象的前缀。如果两个 vector 对象的长
//度不相同，假设较短的 vector 对象长度为 n，则只对这
//两个对象的前面 n 个元素做比较。例如，对于 (0, 1, 1,
//2) 和 (0, 1, 1, 2, 3, 5, 8) 这两个 vector，你的程
//序应该返回 true。
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
    vector<int> vec1,vec2;
    int val;
    //执行两个vector的输入   规定vector1是前缀
   cout<<"input vec1: end with 10086"<<endl;
    while(cin>>val&&val!=10086) //不能用ctrl+z作为输入的结尾， if so 下面的cin会以为文件已经结束了还读个屁啊  换成逻辑的判断!=10086  心累word妈
    {
        vec1.push_back(val);

    }
    cout<<"input vec2: end with 10086"<<endl;
    while(cin>>val&&val!=10086)
    {
        vec2.push_back(val);
    }
    //同时遍历两个vector
    for(vector<int>::iterator it1=vec1.begin(), it2=vec2.begin();it1!=vec1.end();++it1,++it2)
        {
            if(*it1!=*it2)
            {
                cout<<"vector1 is not vector2's qianzhui!"<<endl;
                return 0;
            }

        }
     cout<<"vector1 is  vector2's qianzhui!"<<endl;
     return 0;


}
