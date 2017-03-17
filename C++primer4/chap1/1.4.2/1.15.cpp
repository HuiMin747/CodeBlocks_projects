#include<iostream>

using namespace std;
int main()
{
    cout<<"please input two numbers:"<<endl;
    int   a,b;
    cin>>a>>b;
    int lower,upper;
    if(a>=b)
    {
        upper=a;
        lower=b;
    }
    else
    {
        upper=b;
        lower=a;
    }

    int i=lower;
    int sum=0;
    while(i<=upper)
    {
        sum+=i;
        i++;
    }

    cout<<"Add   from   "<<lower<<"  to  "<<upper<<"  is  "<<sum<<endl;


    return 0;
}
