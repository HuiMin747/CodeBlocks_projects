//��д������ int �������ʼ�� vector ����
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

    vector<int> vec(a,a+arr_size); //�������ʼ��vector   ����������Ԫ�ص�ָ����
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"  ";
    }
    return 0;
}
