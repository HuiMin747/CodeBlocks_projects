//��д�����ж����������Ƿ���ȣ�Ȼ���дһ�����Ƶĳ�
//��Ƚ����� vector��

#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
//    const size_t array_size=10;
//    int ia[array_size]={1,2,3,4,5,6,7,8,9,10};
//    int ia2[array_size]={1,2,3,4,5,6,7,8,9};
//    bool isEqual=true;
//
//    for(size_t i=0;i!=array_size;i++)
//    {
//       if(ia[i]!=ia2[i])
//       {
//           isEqual=false;
//       }
//    }
//    cout<<isEqual;

     //vector compare
     vector<int> vec(10,1),vec2(10,1);
     bool isEqual=true;
     if(vec!=vec2)
     {
         isEqual=false;
         cout<<"vec is not equal to vec2"<<endl;
         return 0;  //����ֱ�ӷ��� 0��ʾ���������
     }

    cout<<"vec is equal to vec2"<<endl;

    return 0;
}
