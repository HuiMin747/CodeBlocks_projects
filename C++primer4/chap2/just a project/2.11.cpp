#include <iostream>

using namespace std;

int main()
{
    cout << "Please input the base and exponent:" << endl;
    int base,exponent;
    cin>>base>>exponent;
    int i=0;
    int res=1;
    while(i<exponent)
    {
        res*=base;
        i++;
    }
    cout<<res;
    return 0;
}
