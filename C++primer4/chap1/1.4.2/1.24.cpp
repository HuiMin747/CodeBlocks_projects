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
                total=temp;  //因为temp要接新的书   所以得把temp的值拱出去

            }
        }
        return 0;
    }

    else
    {
        cerr<<"input error!"<<endl;
    }
}
