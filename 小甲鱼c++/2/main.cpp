#include <iostream>
#include<cmath>


using namespace std;

int main()
{
    const  int NMAX=11;
    char   data7[NMAX+5]={};

    int i=0;
    int sum=0;
    while(1)
    {
        cin>>data7[i];
        sum+=data7[i]*(pow(7,i));
        if(sizeof(data7[NMAX+5])==11)
        {
            break;
        }
        if(data7[i]=='\n')
        {
            break;
        }

          i++;
    }

    cout<<sum;

    char  data10[NMAX+5]={};
    while(1)
    {
        int i=0;
        data10[i]=sum%100;
        data10[i+1]=(sum%100)/10;
        data10[i+2]=(sum%100)%10;
    }

    for(int i=0;i<=10;i++)
    {
        cout<<data10[i];
    }
    return 0;
}
