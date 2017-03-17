//修改元音统计程序使其可统计以下双字符序列出现的次
//数：ff、fl 以及 fi。
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int ff=0,fl=0,fi=0;
    //一个 [之前，当前] 的相对概念
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
