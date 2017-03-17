//读入一段文本到 vector 对象，每个单词存储为 vector
//中的一个元素。把 vector 对象中每个单词转化为大写字
//母。输出 vector 对象中转化后的元素，每八个单词为一
//行输出。
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
    vector<string> svec;
    //将单词存入到vector之中
    while(cin>>s)
    {
        svec.push_back(s);
    }
    //判断是否为空向量
    if(svec.size()==0)
    {
        cout<<"Empty vector?";
        return -1;
    }
    int count=0;
    for(vector<string>::iterator it=svec.begin();it!=svec.end();it++)
    {
        for(string::iterator sit=(*it).begin();sit!=(*it).end();sit++)  //string类也有自己的迭代器，可以用迭代器统一访问
        {
            *sit=toupper(*sit);

        }
        cout<<*it<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }

    return 0;
}
