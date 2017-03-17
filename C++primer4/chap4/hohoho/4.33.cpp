//编写程序把 int 型 vector 复制给 int 型数组。
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int > vec;
    int val;
    while(cin>>val)
    {
        vec.push_back(val);
    }

    const  unsigned int arr_size=100;
    int arry[arr_size];
    if(vec.size()>arr_size)
    {
        cout<<"The integer array will be overflow!"<<endl;
        return -1;
    }
    int * pa=arry;
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++,pa++)
    {
        *pa=*it;
        cout<<*pa<<" ";
    }

    return 0;
}
