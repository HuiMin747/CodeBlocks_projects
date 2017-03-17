
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



    cout<<"Lower:   "<<lower<<endl<<"Upper:    "<<upper<<endl;


    return 0;
}

