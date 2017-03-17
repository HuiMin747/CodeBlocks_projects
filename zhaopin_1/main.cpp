#include <iostream>
#include<algorithm>

using namespace std;

const int  NMAX=10000;
int   grade[NMAX];

int  query(int id1,int id2)
{
      int comp=grade[id1];
      for(int i=id1;i<id2;i++)
      {
          comp=max(comp,grade[i]);
      }

      return comp;
}

void update(int id, int value)
{
    grade[id]=value;
}

int main()
{
    int N=0,M=0;
    cin>>N>>M;
    for(int i=0;i<=N-1;i++)
    {
        cin>>grade[i];
    }
    char C=0;
    int A,B;

    int j=0;
    while(j<=M-1)
    {
         cin>>C>>A>>B;
            if(C=='Q')
            {
                int biger=query(A,B);
                cout<<biger;
            }
            else if(C='U')
            {
                update(A,B);
            }
    }

    return 0;
}
