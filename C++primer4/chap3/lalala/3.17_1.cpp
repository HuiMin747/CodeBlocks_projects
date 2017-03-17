//读一组整数到 vector 对象，计算并输出每对相邻元素的
//和。如果读入元素个数为奇数，则提示用户最后一个元素
//没有求和，并输出其值。然后修改程序：头尾元素两两配
//对 （第一个和最后一个， 第二个和倒数第二个， 以此类推），
//计算每对元素的和，并输出。
//用迭代器完成
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    int  val;
    vector<int> vec;
    //读取整数到向量
    while(cin>>val)
    {
        vec.push_back(val);
    }
    if(vec.size()==0)
    {
        cout<<"No element?"<<endl;
        return -1;
    }
    //求和计数
    int count=0;
//    //输出相邻元素的和
//    for(vector<int>::const_iterator it=vec.begin();it<=vec.end()-2;it+=2)
//    {
//        cout<<*it+*(it+1)<<"   ";
//        count++;
//        if(count%5==0)   //这里就是计数从1开始数，不是下标
//        {
//            cout<<endl;
//        }
//    }

    //求首尾元素的和    定义两个迭代器哈哈哈   hin强势
    for(vector<int>::iterator first=vec.begin(),last=vec.end()-1;first<last;first++,last--)
    {
        cout<<*first+*last<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }
    if(vec.size()%2!=0)
    {

        cout<<"It's an odd number, the last integer  "<<*(vec.begin()+vec.size()/2);
    }

}
