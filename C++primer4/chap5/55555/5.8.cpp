//��д���ʽ�ж��ĸ�ֵ a��b��c �� d �Ƿ����� a ����
//b��b ���� c ���� c ���� d ��������
#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //abcd���������� �������ַ�
    string s;
    vector<string> vec;
    while(cin>>s)
    {
        vec.push_back(s);
    }
    if(vec.size()!=4)
    {
        cout<<"a b c d input wrong!"<<endl;
        return -1;
    }

    vector<string>::iterator it=vec.begin();
    if(*it>*(it+1)&& *(it+1)>*(it+2)&&*(it+2)>*(it+3))  //������д��һ��it+4���²���Ԥ�ϵĽ��    �Ͱ�it ����1���Ͷ���
    {
              cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;

    }
     return 0;
}
