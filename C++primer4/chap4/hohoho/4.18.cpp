//��д����ʹ��ָ���һ�� int �����������Ԫ������
//Ϊ 0��
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const  size_t  array_size=10;
    int  ia[array_size]={10,20};
//    int *pia=ia;
//    for(unsigned i=0;i!=array_size;i++)
//    {
//        *(pia+i)=1;
//        cout<<*(pia+i)<<"    ";
//    }
    for(int * pbegin=ia, * pend=ia+array_size;pbegin!=pend;pbegin++)    //��ģ�������    pbegin����  v.begin()   ָ�������һ��Ԫ��  pend���� .end()ָ�����Ԫ�ص���һ��λ��
    {                                                                                                                     //����ע��pbegin pend ������һ��int
       *pbegin=0;
       cout<<*pbegin<<"    ";
    }
}
