//��д���������ÿ���������͵ĳ��ȡ�
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    //sizeof�ǲ�����
    cout<<"sizeof(int)"<<sizeof(int)<<endl;
    cout<<"sizeof(unsigned int)"<<sizeof(unsigned int)<<endl;
    cout<<"sizeof(long)"<<sizeof(long)<<endl;
    cout<<"sizeof(long long)"<<sizeof(long long)<<endl;
    cout<<"sizeof(float)"<<sizeof(float)<<endl;
    cout<<"sizeof(double)"<<sizeof(double)<<endl;
    cout<<"sizeof(char)"<<sizeof(char)<<endl;
    cout<<"sizeof(short)"<<sizeof(short)<<endl;


    char array[20];
    cout<<"sizeof(char array[20])"<<sizeof(array)<<endl; //�������ж���Ԫ��
    cout<<"sizeof(char array[20])"<<sizeof(array[20])<<endl;  //�����ĳһ��Ԫ�صĴ�С

    const char * str="I love u";
    cout<<"sizeof(const char * str)"<<sizeof(str)<<endl;  //C����ַ���     �Ǹ�ָ���Ƕ��
    cout<<"sizeof(const char * str)"<<strlen(str)<<endl;  //C����ַ���������  ��Ҫinclude cstring    ������C���ַ������� ����\0
    return 0;
}
