//��д������һ���� 10 �� int ��Ԫ�ص����飬������
//�������е�λ����Ϊ��Ԫ�صĳ�ֵ��

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int array_size=10;
    int ia[array_size];
    for(unsigned i=0;i!=array_size;i++)
    {
        ia[i]=i+1;
        cout<<ia[i]<<"   ";
    }
    return 0;
}
