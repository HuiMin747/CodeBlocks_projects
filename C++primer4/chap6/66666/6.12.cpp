//��дһ��С���򣬴ӱ�׼�������һϵ�� string ����
//Ѱ�������ظ����ֵĵ��ʡ�����Ӧ���ҳ���������������
//���ʵ�����λ�ã��õ��ʵĺ���������ٴγ����Լ���
//�������ظ��������ĵ��ʼ����ظ�����������ظ���
//�������ֵ����û�е����ظ������˵����Ϣ�����磬��
//�������ǣ�
//how, now now now brown cow cow
//�����Ӧ������now��������ʳ��������Ρ�
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //��������string pres, currs,����ǰ�����string��ǰһ��string�ıȽ��߼�
    string pres,currs;
    //���嵱ǰstring���ִ����ļ�����  maxcount��ʾ���ִ�������string�Ĵ���
    int currCnt=0,maxCnt=0;
    string  maxs;//�ظ���������string

    while(cin>>currs)
    {
        if(currs==pres)
        {
            currCnt++;
        }
        else
        {
            //�ߵ��� now now now || cow ֮��   Ҫ���ǵ���currentcount   maxcount  maxstring�ĸ�����
            if(currCnt>maxCnt)
            {
                maxCnt=currCnt;
                maxs=currs;
            }
            //curentCount ��Զ������������ǰ�����string���ظ�������  �������µ�string���־��ø���1
            currCnt=1;

        }
        pres=currs;  //current string����Ҫ�����µ�string������Ҫ��ֵ����prestring    ����߼�Ҫ��
    }

    cout<<"The most repeated word is "<<maxs<<" and the repeat time is "<<maxCnt<<endl;
    return 0;
}
