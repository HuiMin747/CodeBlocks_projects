//�޸�Ԫ��ͳ�Ƴ���ʹ���ͳ�Ƴ�����Ŀո��Ʊ���ͻ�
//�з��ĸ�����
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int  blkCnt=0,chtCnt=0,entCnt=0;
    while(cin.get(ch))  //ע�����������cin>>ch�Ļ�����������е��Ʊ�� ���� �ո�  �ᱻ�����ָ�����  �����滻Ϊ��cin�����get��Ա����
    {
        switch(ch)
        {
        case ' ':
            blkCnt++;
            break;
        case '\t':
            chtCnt++;
            break;
        case '\n':
            entCnt++;
            break;


        }
    }
    cout << "a blank:" <<blkCnt<< endl;
    cout << "e chart-maker:" <<chtCnt<< endl;
    cout << "i entry:" <<entCnt<< endl;

    return 0;
}
