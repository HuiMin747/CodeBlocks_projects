//����һ���ı��� vector ����ÿ�����ʴ洢Ϊ vector
//�е�һ��Ԫ�ء��� vector ������ÿ������ת��Ϊ��д��
//ĸ����� vector ������ת�����Ԫ�أ�ÿ�˸�����Ϊһ
//�������
#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string s;
    vector<string> svec;
    //�����ʴ��뵽vector֮��
    while(cin>>s)
    {
        svec.push_back(s);
    }
    //�ж��Ƿ�Ϊ������
    if(svec.size()==0)
    {
        cout<<"Empty vector?";
        return -1;
    }
    int count=0;
    for(vector<string>::iterator it=svec.begin();it!=svec.end();it++)
    {
        for(string::iterator sit=(*it).begin();sit!=(*it).end();sit++)  //string��Ҳ���Լ��ĵ������������õ�����ͳһ����
        {
            *sit=toupper(*sit);

        }
        cout<<*it<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }

    return 0;
}
