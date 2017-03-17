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
    std::cout<<"����ǰa="<<a<<"   b="<<b<<std::endl;
    swap(a,b);
    std::cout<<"������a="<<a<<"   b="<<b<<std::endl;

    std::string c="С����";
    std::string d="С����";
    std::cout<<"����ǰc="<<c<<"   d="<<d<<std::endl;
    swap(c,d);
    std::cout<<"������c="<<c<<"   d="<<d<<std::endl;
    return 0;
}
