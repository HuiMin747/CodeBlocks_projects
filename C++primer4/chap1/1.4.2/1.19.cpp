
#include<iostream>   //ctrl+z  ����֮�� ���س��Ϳ��Խ���cin��������  ����������


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
    while(i>=lower)    //�ڲ�֪��ѭ������ʱ��while����
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

