#include <iostream>
#include<List>

using namespace std;


void Init(List * p);

int main()
{
    List la;

    Init(&la);

    return 0;
}

void Init(List * p)
{
    InitList(p);
    cout<<"List has been initialized!"<<endl;
}
