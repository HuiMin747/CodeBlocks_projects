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
    Boyfriend(string theName); //这里容易不写public 然后就默认为private了
};

class Girlfriend : public Lovers
{
    public:
    Girlfriend(string theName);
};

class Others
{
public:
    Others(string theName);   //这里构造函数参数不能少
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
    cout<<this->name<<"亲了一下"<<love->name<<endl;
}

void Lovers:: ask(Lovers * lover, string something)
{
    cout<<name<<"让"<<lover->name<<"大宝贝去"<<something<<endl;
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
    cout<<name<<"偷偷亲了一下"<<lover->name<<endl;
}

int main()
{
    Boyfriend boyfriend("A君");
    Girlfriend girlfriend("B妹");
    Others others("路人甲");

    boyfriend.kiss(&girlfriend);   //这里容易少写&
    girlfriend.ask(&boyfriend,"到超市给她买一袋洗衣粉");
    others.kiss(&girlfriend);



    return 0;
}
