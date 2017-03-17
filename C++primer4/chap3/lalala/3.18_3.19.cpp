//编写程序来创建有 10 个元素的 vector 对象。用迭代器
//把每个元素值改为当前值的 2 倍。输出 vector 的所有元素。
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<double> vec(10);

    for(vector<double>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cin>>*it;   //由于已经定义了vector的大小，才能用cin向里面输入，如果是空向量的话下标都不能访问，只能push_back
        *it=(*it)*2;
        cout<<*it<<"  ";
    }
    return 0;
}

