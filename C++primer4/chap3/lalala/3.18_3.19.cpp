//��д������������ 10 ��Ԫ�ص� vector �����õ�����
//��ÿ��Ԫ��ֵ��Ϊ��ǰֵ�� 2 ������� vector ������Ԫ�ء�
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<double> vec(10);

    for(vector<double>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cin>>*it;   //�����Ѿ�������vector�Ĵ�С��������cin���������룬����ǿ������Ļ��±궼���ܷ��ʣ�ֻ��push_back
        *it=(*it)*2;
        cout<<*it<<"  ";
    }
    return 0;
}

