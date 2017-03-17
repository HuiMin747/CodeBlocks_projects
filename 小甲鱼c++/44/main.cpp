#include <iostream>
#include<string>

template<class T>
void  swap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    double a=3.14;
    double b=1.34;
    std::cout<<"交换前a="<<a<<"   b="<<b<<std::endl;
    swap(a,b);
    std::cout<<"交换后a="<<a<<"   b="<<b<<std::endl;

    std::string c="小甲鱼";
    std::string d="小由鱼";
    std::cout<<"交换前c="<<c<<"   d="<<d<<std::endl;
    swap(c,d);
    std::cout<<"交换后c="<<c<<"   d="<<d<<std::endl;
    return 0;
}
