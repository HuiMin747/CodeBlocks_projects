//��д����ӱ�׼�������һϵ�� string ����ֱ��ͬһ
//�����������������Σ��������еĵ��ʶ��Ѷ��꣬�Ž���
//��ȡ����ʹ�� while ѭ����ÿ��ѭ������һ�����ʡ���
//������������ͬ�ĵ��ʣ����� break ������ѭ������
//ʱ�����������ظ����ֵĵ��ʣ��������û���κε���
//�����ظ����ֵ���Ϣ��
//�޸�ϰ��ĳ���ʹ����ֻѰ���Դ�
//д��ĸ��ͷ���������ֵĵ��ʡ�
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    string currs,pres; //��ǰ�����string
    while(cin>>currs)
    {
        if(currs==pres&&isupper(pres[0]))
        {
            cout<<currs;

        }
        pres=currs;
    }
//    cout<<"No same string"<<endl;
//     return 0;
}
