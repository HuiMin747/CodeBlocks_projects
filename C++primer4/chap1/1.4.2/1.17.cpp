
#include<iostream>   //ctrl+z  ����֮�� ���س��Ϳ��Խ���cin��������  ����������  ԭ����ctrl+z��windows���ļ�������   ���� cin>>value����ʧ��  ���ʽֵΪFALSE


using namespace std;
int main()
{
    cout<<"Please input  a group of number:"<<endl;
    int   array[100];
    int   count=0;
    int i=0;
    while(cin>>array[i])
    {

        if(array[i]<0)
            {
                count++;
            }
        i++;
    }

    cout<<"There is "<<count<<"   negatives"<<endl;

//int value;
//int sum=0;
//while(cin>>value)
//   {
//       sum+=value;
//   }
//cout <<sum<<endl;

    return 0;
}

