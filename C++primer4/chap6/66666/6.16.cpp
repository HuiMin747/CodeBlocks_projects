//�������� int �͵� vector ���󣬱�д�����ж�һ����
//���Ƿ�����һ�������ǰ׺��������� vector ����ĳ�
//�Ȳ���ͬ������϶̵� vector ���󳤶�Ϊ n����ֻ����
//���������ǰ�� n ��Ԫ�����Ƚϡ����磬���� (0, 1, 1,
//2) �� (0, 1, 1, 2, 3, 5, 8) ������ vector����ĳ�
//��Ӧ�÷��� true��
#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
    vector<int> vec1,vec2;
    int val;
    //ִ������vector������   �涨vector1��ǰ׺
   cout<<"input vec1: end with 10086"<<endl;
    while(cin>>val&&val!=10086) //������ctrl+z��Ϊ����Ľ�β�� if so �����cin����Ϊ�ļ��Ѿ������˻�����ƨ��  �����߼����ж�!=10086  ����word��
    {
        vec1.push_back(val);

    }
    cout<<"input vec2: end with 10086"<<endl;
    while(cin>>val&&val!=10086)
    {
        vec2.push_back(val);
    }
    //ͬʱ��������vector
    for(vector<int>::iterator it1=vec1.begin(), it2=vec2.begin();it1!=vec1.end();++it1,++it2)
        {
            if(*it1!=*it2)
            {
                cout<<"vector1 is not vector2's qianzhui!"<<endl;
                return 0;
            }

        }
     cout<<"vector1 is  vector2's qianzhui!"<<endl;
     return 0;


}
