//��д while ѭ�������ӱ�׼�����豸��������(int)��
//�ݣ�������ֵΪ 42 ʱѭ��������
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int val;
    while(cin>>val&&val!=42)
    {
        vec.push_back(val);
    }
    for(vector<int>::size_type i=0;i<=vec.size()-1;i++)
    {
        cout<<vec[i]<<"   ";
    }
    return 0;
}
