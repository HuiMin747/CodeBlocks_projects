#include <iostream>
#include<string>
#include<fstream>

using namespace std;


struct FishOil
    {
        string name;
        string FishID;
        char  gender;   // F   M
    };

bool  InitFish();   //����ʼֵ
bool  ReadFish();   //��ȡFish.txt������ݵ�����
bool  WriteFish(FishOil * FishOil1);    //����ish.txt�ļ� �ӳ���д���ݵ�Fish.txt
void RecordFish();    //¼������


int main()
{
    InitFish();

    while(1)
    {
        cout<<"��ѡ����Ҫ�ķ���"<<endl;
        cout<<"1.��ӡ���ݵ���Ļ"<<endl;
        cout<<"2.¼������"<<endl;
        cout<<"3.�˳�����"<<endl;
        int  choose;
        cin>>choose;

        switch(choose)
        {
        case 1:
            ReadFish();
            break;
        case 2:
            RecordFish();
            break;
        case 3:
            return 0;
        default:
            cout<<"���ѡ����������밴Ҫ��ѡ��"<<endl;
        }

    }


    return 0;
}

bool InitFish()
{
    FishOil  OilWu={"Wu","00123456",'F'};

    if( WriteFish(&OilWu)==false)
    {
        cout<<"��ʼ��ʧ�ܣ�"<<endl;
    }
}

bool WriteFish(FishOil * Oil)
{
    ofstream fileOutput("FishC.txt", ios::app);   //ios::app��Ϊ��˵�� �������ݺ���׷��������
    if(fileOutput.is_open())
    {
        fileOutput<<Oil->name<<"  ";
        fileOutput<<Oil->FishID<<" ";
        fileOutput<<Oil->gender<<" ";

        fileOutput.close();
        cout<<"�����Ѿ����浽�ļ�Fish.txt��";
    }
    else
        cout<<"����ʧ��"<<endl;
}

bool ReadFish()
{
    ifstream in("Fish.txt");
    string temp;
    if(in.is_open())
    {
        cout<<"����\t"<<"���֤\t"<<"�Ա�\t"<<endl;
        while(getline(in,temp))     //while(getline(cin,temp))   ��cin������һ�����ݵ�temp��  �������һ��
        {
            cout<<temp<<"\t";
        }

       return true;
    }
    else
        return  false;
}

void RecordFish()
{
    FishOil  Oildata;
    cout<<"����������������֣�"<<endl;
    cin>>Oildata.name;
    cout<<"���������ID�ţ�"<<endl;
    cin>>Oildata.FishID;
    cout<<"����������Ա�"<<endl;
    cin>>Oildata.gender;

    if(WriteFish(&Oildata))
    {
        cout<<"��ĵ����Ѿ��ɹ���¼��ish.txt���ˣ�"<<endl;
    }

    else
        {
            cout<<"��¼ʧ�ܣ�"<<endl;
            return;
        }
}
