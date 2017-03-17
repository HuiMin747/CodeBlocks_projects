
#include<iostream>   //ctrl+z  按完之后 按回车就可以结束cin的输入了  哈哈哈哈哈


using namespace std;
int main()
{
    cout<<"Please input  two number, and the numbers between the two will be printed:"<<endl;

    int a,b;
    cin>>a>>b;
    int lower,upper;
    if(a>=b)
    {
        upper=a;
        lower=b;
    }
    else
    {
        lower=a;
        upper=b;
    }
    int i=upper;
    while(i>=lower)    //在不知道循环次数时用while合适
    {
        if(i%10==9)
        {
            cout<<endl;
        }
        cout<<i<<'\t';
        i--;
    }

    return 0;

}

