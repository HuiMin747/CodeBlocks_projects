//��д�����ɴӱ�׼�����豸�����Ԫ�����ݽ���һ��
//int �� vector ����Ȼ��̬����һ����� vector ��
//���Сһ�µ����飬�� vector ���������Ԫ�ظ��Ƹ���
//���顣

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int val;
    //Ҫͨ����׼�����豸��vector������ֵ   ��Ҫ��һ�������Ƚ���  while��cin��ѭ������
    while(cin>>val)
    {
        vec.push_back(val);
    }
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"   ";
    }
   //vector��̬���鸴��
    int * ia=new int[vec.size()];
//    for(unsigned i=0;i<=vec.size()-1;i++)
//    {
//        *(ia+i)=vec[i];
//        cout<<ia[i]<<"    ";
//    }

    //vector�����õ�����  ��  ͬʱ��̬����Ҳ��ָ�����
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++,ia++)
    {
        *ia=*it;
        cout<<*ia;
    }
//    cout<<*ia;  ����iaָ���û��

    delete []  ia;

    return 0;
}
