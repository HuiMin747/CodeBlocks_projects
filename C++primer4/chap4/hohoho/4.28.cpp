//编写程序由从标准输入设备读入的元素数据建立一个
//int 型 vector 对象，然后动态创建一个与该 vector 对
//象大小一致的数组，把 vector 对象的所有元素复制给新
//数组。

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int val;
    //要通过标准输入设备向vector输入数值   就要有一个变量先接着  while（cin）循环输入
    while(cin>>val)
    {
        vec.push_back(val);
    }
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"   ";
    }
   //vector向动态数组复制
    int * ia=new int[vec.size()];
//    for(unsigned i=0;i<=vec.size()-1;i++)
//    {
//        *(ia+i)=vec[i];
//        cout<<ia[i]<<"    ";
//    }

    //vector还是用迭代器  ，  同时动态数组也用指针访问
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++,ia++)
    {
        *ia=*it;
        cout<<*ia;
    }
//    cout<<*ia;  测试ia指针变没变

    delete []  ia;

    return 0;
}
