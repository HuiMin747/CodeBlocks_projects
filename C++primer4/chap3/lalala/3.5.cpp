#include <iostream>
#include<string>

using namespace std;

int main()
{
   string  s1;

//   cin>>s1;     //ֻ�����һ���ʣ������ո�Ͳ������
//   cout<<s1;

//   while(cin>>s1)     //���Կո�   �س����ܽ�������
//   {
//       cout<<s1;
//   }

    while(getline(cin,s1))   //ʶ��ո�   �����س��ͽ�������
    {
        int i=0;

        cout<<s1;
    }
    return 0;
}
