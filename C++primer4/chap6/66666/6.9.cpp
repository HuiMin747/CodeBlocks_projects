//�޸�Ԫ��ͳ�Ƴ���ʹ���ͳ������˫�ַ����г��ֵĴ�
//����ff��fl �Լ� fi��
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int ff=0,fl=0,fi=0;
    //һ�� [֮ǰ����ǰ] ����Ը���
    char  pre=0,cur=0;
    while(cin.get(cur))
    {
        if(pre=='f')
        {
            switch(cur)
            {
            case 'f':
                ff++;
                break;
            case 'l':
                fl++;
                break;
            case 'i':
                fi++;
                break;
            }
        }
        pre=cur;
    }
    cout << "ff:" <<ff<< endl;
    cout << "fl:" <<fl<< endl;
    cout << "fi:" <<fi<< endl;

    return 0;
}
