#include <iostream>
#include<string>

using namespace std;

class Pet
{
public:

    Pet(string name);
    ~Pet();

    static int getCount();

protected:
    string name;
private:
    static int count;
};

class Dog : public Pet
{
public:
    Dog(string name);
};

class Cat : public Pet
{
public:    //����������public!!!!!
    Cat(string name);
};

int Pet::count=0; //��̬���Եĳ�ʼ����ֵ

Pet::Pet(string name)
{
    cout<<"��һֻ���������"<<endl;
    count++;   //�Ǿ�̬�������Է��ʾ�̬����
}

Pet::~Pet()
{
    cout<<"��һֻ����ҵ���"<<endl;
    count--;
}

int Pet::getCount()
{
    return count;  //��̬����ֻ��ƥ���ʹ�þ�̬����
}

Dog::Dog(string name) : Pet( name)    //���캯���ļ̳��﷨�ǲ�һ����    û��public   ��������û���β�
{

    cout<<"��һֻ����"<<endl;
}

Cat::Cat(string name) : Pet( name)
{

    cout<<"��һֻ����"<<endl;
}


int main()
{
    Dog dog("����");
    Cat cat("�ɶ�");

    cout<<"�Ѿ�������"<<Pet::getCount()<<"ֻ����"<<endl;  //��̬�����ĵ���ֻ����ô��
    return 0;
}
