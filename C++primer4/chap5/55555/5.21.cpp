//编写程序处理 vector<int> 对象的元素：将每个奇数值
//元素用该值的两倍替换。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int val;  //他的存在只是为了方面vector的存入
    while(cin>>val)
    {
        vec.push_back(val);
    }
    //将奇数用他的两倍替换
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
//        if((*it)%2!=0)
//        {
//            *it=(*it)*2;
//        }
//        cout<<*it<<"  ";
        *it=(*it%2==0?*it:(*it)*2);     //这里？ ：整体需要打括号    *it%2==0不可以打括号  如果打了就是  表达式的逻辑值 TRUE  FALSE
        cout<<*it<<"  ";
    }
    return 0;
}
