#include <iostream>
#include<string>

using namespace std;

int main()
{
   string  s1("I am a good boy!"),s2("Ahe is a goooooooooood girl!");
   if(s1>s2)
   {
       cout<<"s1 is bigger than s2";
   }
   else if(s1==s2)
   {
       cout<<"s1 is equal to s2";
    }
    else
    {
        cout<<"s1 is smaller than s2";
    }

    if(s1.size()>=s2.size())
    {
        cout<<"s1 is longer than s2";
    }
    else
    {
        cout<<"s1 is shorter than s2";
    }


    return 0;
}
