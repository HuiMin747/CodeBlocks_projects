//查看不同的return 0  -1  或者其他

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a;
    if(cin>>a)
        return -1;
    else
        return 0;
}
