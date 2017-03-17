//编写程序提示用户输入两个数，然后报告哪个数比较小。
#include<iostream>
using namespace std;
int main()
{
    cout<<"Please input 2 numbers ,I'll tell you which is smaller."<<endl;
    double a,b;
    cin>>a>>b;
    cout<<(a>b?b:a)<<endl;
}
