#include <iostream>

using namespace std;

class  Add_for_while
{
public:
    static int For(int head,int tail)
    {
        int sum=0;
        for(int i=head;i<=tail;i++)
        {
            sum+=i;
        }
        return sum;
    }

    static int While(int head,int tail)
    {
        int i=head;
        int sum=0;
        while(i<=tail)
        {
            sum+=i;
            i++; //竟然忘了写着一句   不写就是一个死循环了  我的妈呀
        }
        return sum;
    }
};

int main()
{
    int sum=0;
    sum=Add_for_while::For(50,100);
    cout<<sum<<endl;
    sum=Add_for_while::While(50,100);
    cout<<sum<<endl;
    return 0;
}
