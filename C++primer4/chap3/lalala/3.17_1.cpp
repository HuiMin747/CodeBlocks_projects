//��һ�������� vector ���󣬼��㲢���ÿ������Ԫ�ص�
//�͡��������Ԫ�ظ���Ϊ����������ʾ�û����һ��Ԫ��
//û����ͣ��������ֵ��Ȼ���޸ĳ���ͷβԪ��������
//�� ����һ�������һ���� �ڶ����͵����ڶ����� �Դ����ƣ���
//����ÿ��Ԫ�صĺͣ��������
//�õ��������
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    int  val;
    vector<int> vec;
    //��ȡ����������
    while(cin>>val)
    {
        vec.push_back(val);
    }
    if(vec.size()==0)
    {
        cout<<"No element?"<<endl;
        return -1;
    }
    //��ͼ���
    int count=0;
//    //�������Ԫ�صĺ�
//    for(vector<int>::const_iterator it=vec.begin();it<=vec.end()-2;it+=2)
//    {
//        cout<<*it+*(it+1)<<"   ";
//        count++;
//        if(count%5==0)   //������Ǽ�����1��ʼ���������±�
//        {
//            cout<<endl;
//        }
//    }

    //����βԪ�صĺ�    ��������������������   hinǿ��
    for(vector<int>::iterator first=vec.begin(),last=vec.end()-1;first<last;first++,last--)
    {
        cout<<*first+*last<<"   ";
        count++;
        if(count%5==0)
            cout<<endl;
    }
    if(vec.size()%2!=0)
    {

        cout<<"It's an odd number, the last integer  "<<*(vec.begin()+vec.size()/2);
    }

}
