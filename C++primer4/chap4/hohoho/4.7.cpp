//��д��Ҫ�Ĵ��뽫һ�����鸳����һ�����飬Ȼ������
//������� vector ʵ�֡�������ν�һ�� vector ������
//һ�� vector��

#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
//    //��һ�����鸳ֵ����һ������
//    const size_t array_size=10; //������±��������size_t����������±�����ǳ���  ������const
//    string as[array_size],as2[array_size];
//    for(size_t i=0;i!=array_size;i++)
//    {
//        cin>>as[i];
//        as2[i]=as[i];
//        cout<<as2[i]<<"   ";
//        if((i+1)%4==0)
//            cout<<endl;
//    }

    vector<string> svec(10,"love");
    vector<string> svec2(svec);
    int count=0;
    for(vector<string>::iterator it=svec.begin();it!=svec.end();it++)
    {
        cout<<*it<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }

    int count2=0;
     for(vector<string>::iterator it=svec2.begin();it!=svec2.end();it++)
    {
        cout<<*it<<"   ";
         count2++;
        if(count2%5==0)
            cout<<endl;
    }
    return 0;
}
