//��д����ӱ�׼�����豸����һ�� string ���͵��ַ�
//����������α��ʵ�ִӱ�׼�����豸����һ�� C ���
//�ַ�����

#include<iostream>
#include<string>

using namespace std;
int main()
{
    //string�ӱ�׼�����豸����
    string s;
    cin>>s;
    cout<<s;

    //C����ַ����������������������ַ�ʽ

    //1.ָ���ַ�������
    const int str_size=50;
    char str[str_size];
    cin>>str;
    cout<<str;

    //2.��̬����
    char *str;
    const int str_size=50;
    str=new char[str_size];
//    cin>>str;     //cin��Ȼ�Կո�����
//    cout<<str;

    while(cin>>str)
    {
        cout<<str<<" ";
    }
    delete [] str;

    return 0;
}
