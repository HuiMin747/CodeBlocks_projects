#include <iostream>
#include<string>

using namespace std;

class Lovers
{
public:
    Lovers(string theName);
    void kiss(Lovers* lover);
    void ask(Lovers* lover, string something);
protected:
    string name;

    friend class Others;
};

class  Boyfriend : public Lovers
{
    public:
    Boyfriend(string theName); //�������ײ�дpublic Ȼ���Ĭ��Ϊprivate��
};

class Girlfriend : public Lovers
{
    public:
    Girlfriend(string theName);
};

class Others
{
public:
    Others(string theName);   //���ﹹ�캯������������
    void kiss(Lovers* lover);
protected:
    string name;
};

Lovers::Lovers(string theName)
{
    name=theName;
}

void Lovers::kiss(Lovers *love)
{
    cout<<this->name<<"����һ��"<<love->name<<endl;
}

void Lovers:: ask(Lovers * lover, string something)
{
    cout<<name<<"��"<<lover->name<<"�󱦱�ȥ"<<something<<endl;
}

Boyfriend::Boyfriend(string theName)  :  Lovers(theName)
{

}

Girlfriend::Girlfriend(string theName) :  Lovers(theName)
{

}

Others::Others(string theName)
{
    name=theName;
}

void Others::kiss(Lovers * lover)
{
    cout<<name<<"͵͵����һ��"<<lover->name<<endl;
}

int main()
{
    Boyfriend boyfriend("A��");
    Girlfriend girlfriend("B��");
    Others others("·�˼�");

    boyfriend.kiss(&girlfriend);   //����������д&
    girlfriend.ask(&boyfriend,"�����и�����һ��ϴ�·�");
    others.kiss(&girlfriend);



    return 0;
}
