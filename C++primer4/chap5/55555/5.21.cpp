//��д������ vector<int> �����Ԫ�أ���ÿ������ֵ
//Ԫ���ø�ֵ�������滻��
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int val;  //���Ĵ���ֻ��Ϊ�˷���vector�Ĵ���
    while(cin>>val)
    {
        vec.push_back(val);
    }
    //�����������������滻
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
//        if((*it)%2!=0)
//        {
//            *it=(*it)*2;
//        }
//        cout<<*it<<"  ";
        *it=(*it%2==0?*it:(*it)*2);     //��� ��������Ҫ������    *it%2==0�����Դ�����  ������˾���  ���ʽ���߼�ֵ TRUE  FALSE
        cout<<*it<<"  ";
    }
    return 0;
}
