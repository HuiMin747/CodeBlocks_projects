#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    string res;
   while(getline(cin,s))   //ѭ���������    ���ֻ������һ��   ���Ǽ򵥵�   getline(cin,s)
   {
       for(string::size_type  i=0;i<=s.size()-1;i++)
       {
//           string::size_type j=0;
//           if(ispunct(s[i]))
//           {
//               for(string::size_type j=i;j<=s.size()-1;j++)
//               {
//                   s[j]=s[j+1];
//               }
//
//           }
            if(ispunct(s[i]))
            {
                ;
            }
            else
            {
                res+=s[i];  //�������string��+����������
            }

       }
//       cout<<s;
        cout<<res<<endl;
   }


    return 0;
}
