//修改元音统计程序使其可统计出读入的空格、制表符和换
//行符的个数。
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int  blkCnt=0,chtCnt=0,entCnt=0;
    while(cin.get(ch))  //注意这里如果用cin>>ch的话，会忽略所有的制表符 换行 空格  会被当做分隔符，  可以替换为你cin对象的get成员函数
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
