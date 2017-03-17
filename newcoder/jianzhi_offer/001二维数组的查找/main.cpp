//在一个二维数组中，每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个函数，
//输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//输入第一行 二维数组的行数列数    要查找的数    第二行    二维数组     输出  yes  np
//ctrl+shift+c/x注释

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
   static bool  Find(int target, vector<vector<int>  >   array )   //让Find只属于类  下面调用的时候不需要创建对象
    {
        bool  isFind=false;
        if(array.size()==0)
            return false;
        else
        {
            int  row=array.size();
            int  col=array[0].size();
            int  i=0;  //从第一行的最大数开始比较
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
    vector<vector<int> >    array(row,vector<int>(col)) ;   //这里我真实需要几行几列的二维向量 就初始化为几
    for(int i=0;i<row;i++)  //二维向量的输入 赋值还是不会
    {
        for(int j=0;j<col;j++)
            {
                cin>>temp;  //错的
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

