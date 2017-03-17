//编写程序定义一个 vector 对象，其每个元素都是指向
//string 类型的指针，读取该 vector 对象，输出每个
//string 的内容及其相应的长度。
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //vector里面的元素是string指针  所以是string*
    vector<string *>  vec;
    string  str;//只是为了输入值，没有地址啊啥的

    while(cin>>str)
    {
        //开辟一段空间存放string  这时候string指针才真正有了地址
        string * pstr=new string;
        *pstr=str;
        vec.push_back(pstr);
    }

    for(vector<string *>::iterator it=vec.begin();it!=vec.end();it++)
    {
        //读取的是string的本体所以是 ** 后面是string的每个长度
        cout<<**it<<" "<<(**it).size()<<"  ";
    }

    //一定要delete掉开辟的string    这里主要循环删除  存进去的string指针
    for(vector<string *>::iterator it=vec.begin();it!=vec.end();it++)
    {
        delete *it;
    }

     return 0;
}
