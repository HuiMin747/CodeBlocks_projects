
#include<iostream>   //ctrl+z  按完之后 按回车就可以结束cin的输入了  哈哈哈哈哈  原理是ctrl+z是windows的文件结束符   导致 cin>>value读入失败  表达式值为FALSE


using namespace std;
int main()
{
    cout<<"Please input  a group of number:"<<endl;
    int   array[100];
    int   count=0;
    int i=0;
    while(cin>>array[i])
    {

        if(array[i]<0)
            {
                count++;
            }
        i++;
    }

    cout<<"There is "<<count<<"   negatives"<<endl;

//int value;
//int sum=0;
//while(cin>>value)
//   {
//       sum+=value;
//   }
//cout <<sum<<endl;

    return 0;
}

