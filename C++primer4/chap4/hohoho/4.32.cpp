//编写程序用 int 型数组初始化 vector 对象。
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    const int arr_size=50;
    int a[arr_size];

    for(  int * pbegin=a, * pend=a+arr_size;pbegin!=pend;pbegin++)
    {
        cin>>*pbegin;
    }

    vector<int> vec(a,a+arr_size); //用数组初始化vector   传的是数组元素的指针们
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"  ";
    }
    return 0;
}
