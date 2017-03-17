#include<iostream>


class Print_tentozero
{
public:
    static void  While(int head,int tail)
    {
        int i=head;
        while(i>=tail)
        {
            std::cout<<i<<std::endl;
            i--;
        }
    }

    static void  For(int head, int tail)
    {
        for(int i=head;i>=tail;i--)
        {
            std::cout<<i<<std::endl;
        }
    }
};

int main()
{
    Print_tentozero::While(10,0);
    Print_tentozero::For(10,0);

    return 0;
}
