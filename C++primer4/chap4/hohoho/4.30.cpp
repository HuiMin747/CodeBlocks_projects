//��д������������ C ����ַ�������ֵ���ѽ���洢��һ
//�� C ����ַ����С�Ȼ���ٱ�д������������ string ��
//���ַ����������� string �����ַ�����ǰ��� C �����
//��������ֵ������ͬ�����ݡ�

#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main()
{
    //C����ַ���������
    const int str_size=50;
    char  str1[str_size*2]="I am a good";
    char * str2="boy!";

    //��������C����ַ���
    strcat(str1,str2);
    cout<<str1;


//    //string
//    string s1,s2;
//    getline(cin,s1);
//    getline(cin,s2);
//    cout<<s1+s2;









   delete [] str2;
    return 0;
}
