//��дһ��С�������û��������� string ����Ȼ��
//���ĸ� string ������ĸ���д�����ԱȽ�С��Ҳ����
//˵���ĸ����ֵ���ǰ��������Ҫ���û����룬ֱ���û�
//�����˳�Ϊֹ����ʹ�� string ���͡�string ���͵�С
//�ڲ������Լ� do while ѭ��ʵ�֡�
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    //����string������
    string sval;
    string s1,s2;
    cout<<"please input the string1 end with 'quit' "<<endl;
    while(cin>>sval&&sval!="quit")     //cin.get()  ����ֻ�����ַ�char  �����ǲ����Էָ���
    {
        s1=s1+sval+" ";
    }
    cout<<"please input the string2 end with 'quit' "<<endl;
    while(cin>>sval&&sval!="quit")
    {
        s2=s2+sval+" ";
    }
    cout<<"According to the dictionary, the smaller string is:"<<endl;
    cout<<(s1<=s2?s1:s2)<<endl;
     return 0;


}
