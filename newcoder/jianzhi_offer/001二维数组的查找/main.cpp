//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳�����������һ��������
//����������һ����ά�����һ���������ж��������Ƿ��и�������
//�����һ�� ��ά�������������    Ҫ���ҵ���    �ڶ���    ��ά����     ���  yes  np
//ctrl+shift+c/xע��

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int    row=0,col=0,num=0;
//    bool   isFound=false;
//    int  array[100][100];
//
//    cin>>row>>col>>num;
//    for(int i=0;i<row;i++)
//    {
//        for(int j=0;j<col;j++)
//        {
//            cin>>array[i][j];
//            if(isFound==false&&array[i][j]==num)
//            {
//                isFound=true;
//            }
//        }
//
//    }
//
//    if(isFound==true)
//    {
//        cout<<"yes";
//    }
//    else
//        cout<<"no";
//
//    return 0;
//}


#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
   static bool  Find(int target, vector<vector<int>  >   array )   //��Findֻ������  ������õ�ʱ����Ҫ��������
    {
        bool  isFind=false;
        if(array.size()==0)
            return false;
        else
        {
            int  row=array.size();
            int  col=array[0].size();
            int  i=0;  //�ӵ�һ�е��������ʼ�Ƚ�
            int  j=col-1;

            while(i<=row-1&&j>=0)
            {
                if(array[i][j]==target)
                {
                    isFind=true;
                    return isFind;
                }
                else if(array[i][j]<target)
                    i++;
                else
                    j--;
            }

            return isFind;
        }
    }
};

int main()
{
    int  row=0,col=0,target=0;
    int temp=0;
    cin>>row>>col>>target;
    vector<vector<int> >    array(row,vector<int>(col)) ;   //��������ʵ��Ҫ���м��еĶ�ά���� �ͳ�ʼ��Ϊ��
    for(int i=0;i<row;i++)  //��ά���������� ��ֵ���ǲ���
    {
        for(int j=0;j<col;j++)
            {
                cin>>temp;  //���
                array[i][j]=temp;
            }
    }

    bool isFind=false;
    isFind=Solution::Find(array,target);

    if(isFind==true)
        cout<<"yes";
    else
        cout<<"no";

}

