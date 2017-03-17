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

bool  InitFish();   //赋初始值
bool  ReadFish();   //读取Fish.txt里的内容到程序
bool  WriteFish(FishOil * FishOil1);    //创建ish.txt文件 从程序写内容到Fish.txt
void RecordFish();    //录入数据


int main()
{
    InitFish();

    while(1)
    {
        cout<<"请选择需要的服务："<<endl;
        cout<<"1.打印数据到屏幕"<<endl;
        cout<<"2.录入数据"<<endl;
        cout<<"3.退出程序"<<endl;
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
            cout<<"你的选择出错啦，请按要求选择！"<<endl;
        }

    }


    return 0;
}

bool InitFish()
{
    FishOil  OilWu={"Wu","00123456",'F'};

    if( WriteFish(&OilWu)==false)
    {
        cout<<"初始化失败！"<<endl;
    }
}

bool WriteFish(FishOil * Oil)
{
    ofstream fileOutput("FishC.txt", ios::app);   //ios::app是为了说明 在老数据后面追加新数据
    if(fileOutput.is_open())
    {
        fileOutput<<Oil->name<<"  ";
        fileOutput<<Oil->FishID<<" ";
        fileOutput<<Oil->gender<<" ";

        fileOutput.close();
        cout<<"数据已经保存到文件Fish.txt中";
    }
    else
        cout<<"保存失败"<<endl;
}

bool ReadFish()
{
    ifstream in("Fish.txt");
    string temp;
    if(in.is_open())
    {
        cout<<"姓名\t"<<"身份证\t"<<"性别\t"<<endl;
        while(getline(in,temp))     //while(getline(cin,temp))   从cin流加载一行数据到temp里  并输出这一行
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
    cout<<"请输入鱼油你的名字："<<endl;
    cin>>Oildata.name;
    cout<<"请输入你的ID号："<<endl;
    cin>>Oildata.FishID;
    cout<<"请输入你的性别："<<endl;
    cin>>Oildata.gender;

    if(WriteFish(&Oildata))
    {
        cout<<"你的档案已经成功记录在ish.txt里了！"<<endl;
    }

    else
        {
            cout<<"记录失败！"<<endl;
            return;
        }
}
