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
public:    //经常会掉这个public!!!!!
    Cat(string name);
};

int Pet::count=0; //静态属性的初始化赋值

Pet::Pet(string name)
{
    cout<<"有一只动物出生了"<<endl;
    count++;   //非静态函数可以访问静态属性
}

Pet::~Pet()
{
    cout<<"有一只动物挂掉了"<<endl;
    count--;
}

int Pet::getCount()
{
    return count;  //静态方法只能匹配的使用静态属性
}

Dog::Dog(string name) : Pet( name)    //构造函数的继承语法是不一样的    没有public   父类里面没有形参
{

    cout<<"是一只狗狗"<<endl;
}

Cat::Cat(string name) : Pet( name)
{

    cout<<"是一只啊喵"<<endl;
}


int main()
{
    Dog dog("乐乐");
    Cat cat("纳豆");

    cout<<"已经诞生了"<<Pet::getCount()<<"只宠物"<<endl;  //静态方法的调用只能这么来
    return 0;
}
