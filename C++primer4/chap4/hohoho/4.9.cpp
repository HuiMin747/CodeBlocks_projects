//编写程序定义一个有 10 个 int 型元素的数组，并以其
//在数组中的位置作为各元素的初值。

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int array_size=10;
    int ia[array_size];
    for(unsigned i=0;i!=array_size;i++)
    {
        ia[i]=i+1;
        cout<<ia[i]<<"   ";
    }
    return 0;
}
