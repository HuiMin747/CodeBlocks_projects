//��д������һ�� vector ������ÿ��Ԫ�ض���ָ��
//string ���͵�ָ�룬��ȡ�� vector �������ÿ��
//string �����ݼ�����Ӧ�ĳ��ȡ�
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //vector�����Ԫ����stringָ��  ������string*
    vector<string *>  vec;
    string  str;//ֻ��Ϊ������ֵ��û�е�ַ��ɶ��

    while(cin>>str)
    {
        //����һ�οռ���string  ��ʱ��stringָ����������˵�ַ
        string * pstr=new string;
        *pstr=str;
        vec.push_back(pstr);
    }

    for(vector<string *>::iterator it=vec.begin();it!=vec.end();it++)
    {
        //��ȡ����string�ı��������� ** ������string��ÿ������
        cout<<**it<<" "<<(**it).size()<<"  ";
    }

    //һ��Ҫdelete�����ٵ�string    ������Ҫѭ��ɾ��  ���ȥ��stringָ��
    for(vector<string *>::iterator it=vec.begin();it!=vec.end();it++)
    {
        delete *it;
    }

     return 0;
}
