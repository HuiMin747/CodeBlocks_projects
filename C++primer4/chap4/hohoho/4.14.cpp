//��д�����޸�ָ���ֵ��Ȼ���ٱ�д�����޸�ָ����ָ��
//���ֵ��

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string  s="I got a boy, a handsome boy!",s2="happy birthday!";
    string *p=&s;
    cout<<"Before modify, p is "<<p<<endl;
    p=&s2;
    cout<<"After modify, p is "<<p<<endl;

     cout<<"before modify, p 's object is "<<*p<<endl;
     *p="I got a girl, a beautiful girl!";
      cout<<"After modify, p 's  object is "<<*p<<endl;
}
