//��д����ӱ�׼�����豸�����ַ��������Ѹô��������
//�������С�������ĳ�����δ���ɱ䳤�����롣�ṩ��
//���������鳤�ȳ����ַ������ݲ�����ĳ���
#include<iostream>

using namespace std;

int main()
{
    char  * str;
    const int arr_size=50;   //const����ֵ�����ʼ��
    str=new char[arr_size];
    while(cin>>str)
    {
        cout<<str<<"  ";
    }

    delete [] str;
    return 0;
}
