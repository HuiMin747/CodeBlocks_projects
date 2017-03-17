//编写程序，使用指针把一个 int 型数组的所有元素设置
//为 0。
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const  size_t  array_size=10;
    int  ia[array_size]={10,20};
//    int *pia=ia;
//    for(unsigned i=0;i!=array_size;i++)
//    {
//        *(pia+i)=1;
//        cout<<*(pia+i)<<"    ";
//    }
    for(int * pbegin=ia, * pend=ia+array_size;pbegin!=pend;pbegin++)    //在模拟迭代器    pbegin就是  v.begin()   指向数组第一个元素  pend就是 .end()指向最后元素的下一个位置
    {                                                                                                                     //这里注意pbegin pend 共用了一个int
       *pbegin=0;
       cout<<*pbegin<<"    ";
    }
}
