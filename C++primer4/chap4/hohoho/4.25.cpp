//��д����Ƚ����� string ���͵��ַ�����Ȼ���д��һ
//������Ƚ����� C ����ַ�����ֵ��
#include<iostream>
#include<string>
#include<cstring>   //Ϊ��ʹ��C����ַ����Ĳ�������   strcopy  strcmp֮���
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s1("I love u !"),s2("My baby~");
    if(s1>s2)
    {
        cout<<"s1 is bigger than s2"<<endl;
    }
    else
    {
        cout<<"s1 is smaller than s2"<<endl;
    }

//    const char *c1="I love u !";   //C����ַ����Ķ�������������
//    char c2[]="My baby~";
//    int isBig=strcmp(c1,c2);   //�ȽϺ����Ĳ���������ָ��
//    cout<<isBig<<endl;

    //��C++�����´���C����ַ������������
    char * str1,*str2;
    int str_size=50;
    //��̬�����ڴ棡������   ��ָ�����
    str1=new char[str_size];    //����ÿ�β�����ʱ��Ͱ�deleteһ��д��
    str2=new char[str_size];
    //�ַ����Ķ�̬����             ��ָ�����
    cin>>str1;
    cin>>str2;
    //�Ŵ�
    if(strlen(str1)==0||strlen(str2)==0)
    {
        cout<<"No cstring?"<<endl;
        return -1;
    }
    //�Ƚ��ַ����Ĵ�С
    int isBigger=0;
    isBigger=strcmp(str1,str2);
    if(isBigger<0)
        {cout<<"str1 is smaller than s2"<<endl;}
    else if(isBigger>0)
        {cout<<"st1 is bigger than s2"<<endl;}
    else
        {cout<<"str1 is  equal to s2"<<endl;}


    //�ǳ���Ҫ����������������������������
    delete [] str1;
    delete [] str2;

    return 0;
}
