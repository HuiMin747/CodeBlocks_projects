//前面已实现的统计元音的程序存在一个问题：不能统计大
//写的元音字母。编写程序统计大小写的元音，也就是说，
//你的程序计算出来的 aCnt，既包括 'a' 也包括 'A' 出
//现的次数，其他四个元音也一样。
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
