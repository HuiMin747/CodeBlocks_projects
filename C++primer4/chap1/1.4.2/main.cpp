#include<iostream>
#include"Sales_item.h"

using namespace std;
int  main()
{
    Sales_item  total,temp;
    if(cin>>total)
    {
        while(cin>>temp)
        {
            if(total.same_isbn(temp))
            {
                total+=temp;
                cout<<total;
            }
            else
            {
                cout<<total;
                total=temp;

            }
        }
        return 0;
    }

    else
    {
        cerr<<"input error!"<<endl;
    }
}
