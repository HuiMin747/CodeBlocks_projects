//编写 while 循环条件从标准输入设备读入整型(int)数
//据，当读入值为 42 时循环结束。
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int val;
    while(cin>>val&&val!=42)
    {
        vec.push_back(val);
    }
    for(vector<int>::size_type i=0;i<=vec.size()-1;i++)
    {
        cout<<vec[i]<<"   ";
    }
    return 0;
}
