#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
//int main()
//{
//    string word;
//    vector<string> str;
//    while(cin>>word)   //�Կո�����  ÿ�γ��ֿո���һ��cin����Ľ���������ѭ���壬ִ��push_back��ֻ����һ�����������ˣ�����������Ҫһ���һ�����cin ����
//    {
//        str.push_back(word);
//    }
//    cout<<str[0]<<str[1];
//}


//����Ԫ�����������ӣ����һ�������û����ԣ��������
//int main()
//{
//    vector<int>  v;
//    int  num=0;
//    while(cin>>num)    //�Կո�����   ��һ�������ո�ͽ���while�ڲ���v��ֵ��Ȼ��ڶ���ѭ������   ���ǿո�֮�������
//    {
//        v.push_back(num);
//    }
//
//    //��ͳһ��������Ե�
//    for(vector<int> ::size_type i=0;i<v.size()-1;i+=2)   //v.size()��֪v���Ԫ���ж��ٸ�    ע�����ﲻȡ�Ⱥźܴ���   ����ż��ͨ��
//      {
//           cout<<v[i]+v[i+1]<<"\t";
//      }
//     //�ٸ���������Ե�����β��
//     if(v.size()%2!=0)
//     {
//         cout<<"the last integer "<<v[v.size()-1]<<"have no friend"<<endl;
//     }
//
//    return 0;
//}



//��λ��ӣ�����ÿ��Ԫ�صĺͲ����
int main()
{
    vector<int>  v;
    int val;
    while(cin>>val)
    {
        v.push_back(val);
    }
    //����ż���ҵ�ͳһ����͹��ɣ������������͵Ĳ���
    int half=v.size()/2;
    for(vector<int>::size_type i=0;i<half;i++)
    {
        cout<<v[i]+v[v.size()-1-i]<<"\t";
    }
    //��ʾ�м������û�����
    if(v.size()%2!=0)
    {
        cout<<"the integer is odd and the middle number is  "<<v[half]<<endl;
    }
    return 0;
}
