//ǰ����ʵ�ֵ�ͳ��Ԫ���ĳ������һ�����⣺����ͳ�ƴ�
//д��Ԫ����ĸ����д����ͳ�ƴ�Сд��Ԫ����Ҳ����˵��
//��ĳ����������� aCnt���Ȱ��� 'a' Ҳ���� 'A' ��
//�ֵĴ����������ĸ�Ԫ��Ҳһ����
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
    while(cin>>ch)
    {
        switch(ch)
        {
        case 'a':case 'A':
            aCnt++;
            break;
        case 'e':case 'E':
            eCnt++;
            break;
        case 'i':case 'I':
            iCnt++;
            break;
        case 'o':case 'O':
            oCnt++;
            break;
        case 'u':case 'U':
            uCnt++;
            break;

        }
    }
    cout << "a vowel:" <<aCnt<< endl;
    cout << "e vowel:" <<eCnt<< endl;
    cout << "i vowel:" <<iCnt<< endl;
    cout << "o vowel:" <<oCnt<< endl;
    cout << "u vowel:" <<uCnt<< endl;
    return 0;
}
