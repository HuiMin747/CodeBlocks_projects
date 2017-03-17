#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main()
{
    vector<string> v;
    string s;
    //向v添加单词
    while(cin>>s)
    {
        v.push_back(s);
    }
    //判断是否为空向量
    if(v.size()==0)
    {
        cout<<"No string ?"<<endl;
        return -1;
    }
    //遍历v，把里面的每个单词转换为大写
//    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
//    {
//        for(string::size_type j=0;j<=v[i].size()-1;j++)   //这里再次复习了toupper的用法    s[i]= toupper(s[i]) 返回值是字符
//        {
//           v[i][j]=toupper(v[i][j]);    //哈哈哈哈  这不就是二维向量吗  哈哈哈哈    v[i]表示一个string    v[i][j]进入到这个string的身体里，遍历里面的字符
//        }
//    }
//    //输出vector里的单词  8个一行
//    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
//    {
//        if(i%8==0)    //每个字符都输出，在那个字符输出之前先输出回车，  所以观察的是每行排头的那一列的规律
//        {
//            cout<<endl;
//        }
//        cout<<v[i]+"    ";
//    }


//变换字符的循环和打印循环可以合并，就是每行输出八个那里需要改一下
    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
    {
        for(string::size_type) j=0;j<=v[i].size()-1;j++)
        {
            v[i][j]=toupper(v[i][j]);
        }
        cout<<v[i]+"    ";    //因为是string所以可以用加号；
        //每个字符串转换你完毕了就可以考虑输出了   现在是先打印单词在考虑回车，所以观察的是最右一列的下标的规律
        if((i+1)%8==0)
        {
            cout<<endl;
        }
    }
    return 0;
}


