//��д�������һ�� string ���͵����ݣ��������Ǵ洢��
//vector �С����ţ��Ѹ� vector �����Ƹ�һ���ַ�ָ
//�����顣Ϊ vector �е�ÿ��Ԫ�ش���һ���µ��ַ���
//�飬���Ѹ� vector Ԫ�ص����ݸ��Ƶ���Ӧ���ַ�����
//�У�����ָ��������ָ������ַ�ָ�����顣
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
    vector<string>  svec;
    while(cin>>s)
    {
        svec.push_back(s);
    }

    //�����ַ�ָ������
    const  unsigned int arr_size=100;  //���ﶨ��Ϊ�ַ�ָ��ĸ���
    char * arry[arr_size+1];
    if(svec.size()>arr_size)
    {
        cout<<"Overflow!"<<endl;
        return -1;
    }
    int ix=0;
    for(vector<string>::size_type i=0;i<=svec.size()-1;i++,ix++)    //vector���±�����   vector<string>::size_type
    {
        arry[ix]=&svec[i];
    }
    return 0;
}
