#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main()
{
    vector<string> v;
    string s;
    //��v��ӵ���
    while(cin>>s)
    {
        v.push_back(s);
    }
    //�ж��Ƿ�Ϊ������
    if(v.size()==0)
    {
        cout<<"No string ?"<<endl;
        return -1;
    }
    //����v���������ÿ������ת��Ϊ��д
//    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
//    {
//        for(string::size_type j=0;j<=v[i].size()-1;j++)   //�����ٴθ�ϰ��toupper���÷�    s[i]= toupper(s[i]) ����ֵ���ַ�
//        {
//           v[i][j]=toupper(v[i][j]);    //��������  �ⲻ���Ƕ�ά������  ��������    v[i]��ʾһ��string    v[i][j]���뵽���string�����������������ַ�
//        }
//    }
//    //���vector��ĵ���  8��һ��
//    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
//    {
//        if(i%8==0)    //ÿ���ַ�����������Ǹ��ַ����֮ǰ������س���  ���Թ۲����ÿ����ͷ����һ�еĹ���
//        {
//            cout<<endl;
//        }
//        cout<<v[i]+"    ";
//    }


//�任�ַ���ѭ���ʹ�ӡѭ�����Ժϲ�������ÿ������˸�������Ҫ��һ��
    for(vector<string>::size_type i=0;i<=v.size()-1;i++)
    {
        for(string::size_type) j=0;j<=v[i].size()-1;j++)
        {
            v[i][j]=toupper(v[i][j]);
        }
        cout<<v[i]+"    ";    //��Ϊ��string���Կ����üӺţ�
        //ÿ���ַ���ת��������˾Ϳ��Կ��������   �������ȴ�ӡ�����ڿ��ǻس������Թ۲��������һ�е��±�Ĺ���
        if((i+1)%8==0)
        {
            cout<<endl;
        }
    }
    return 0;
}


