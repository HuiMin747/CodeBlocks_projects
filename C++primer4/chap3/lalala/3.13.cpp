#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
//int main()
//{
//    string word;
//    vector<string> str;
//    while(cin>>word)   //对空格敏感  每次出现空格都是一次cin输入的结束，进入循环体，执行push_back，只是我一口气输入完了，编译器还是要一块儿一块儿的cin 处理
//    {
//        str.push_back(word);
//    }
//    cout<<str[0]<<str[1];
//}


//相邻元素两两配对相加，最后一个数如果没有配对，单独输出
//int main()
//{
//    vector<int>  v;
//    int  num=0;
//    while(cin>>num)    //对空格敏感   第一次遇到空格就进入while内部给v赋值，然后第二次循环输入   就是空格之后的内容
//    {
//        v.push_back(num);
//    }
//
//    //先统一处理能配对的
//    for(vector<int> ::size_type i=0;i<v.size()-1;i+=2)   //v.size()得知v里的元素有多少个    注意这里不取等号很聪明   奇数偶数通用
//      {
//           cout<<v[i]+v[i+1]<<"\t";
//      }
//     //再个别处理不能配对的奇数尾巴
//     if(v.size()%2!=0)
//     {
//         cout<<"the last integer "<<v[v.size()-1]<<"have no friend"<<endl;
//     }
//
//    return 0;
//}



//首位相加，计算每队元素的和并输出
int main()
{
    vector<int>  v;
    int val;
    while(cin>>val)
    {
        v.push_back(val);
    }
    //奇数偶数找到统一的求和规律，先输出可以求和的部分
    int half=v.size()/2;
    for(vector<int>::size_type i=0;i<half;i++)
    {
        cout<<v[i]+v[v.size()-1-i]<<"\t";
    }
    //提示中间的数字没有求和
    if(v.size()%2!=0)
    {
        cout<<"the integer is odd and the middle number is  "<<v[half]<<endl;
    }
    return 0;
}
