#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
    Person(string name);
    virtual void introduce()=0;
    protected:
    string name;
};

class Teacher :public Person
{
public:
    Teacher(string name,string teaclasses);
    void introduce();
    void teach();
protected:
    string classes;
};

class Student : public Person
{
public:
    Student(string name,string leaclasses);
    void introduce();
    void learn();
protected:
    string classes;
};

class TeachingStudent : public Teacher , public Student
{
public:
    TeachingStudent(string name,string teaclasses,string leaclasses);
    void introduce();

};

Person::Person(string name)
{
    this->name=name;
}

Teacher::Teacher(string name, string teaclasses)  : Person(name)
{
    classes=teaclasses;
}

void Teacher::teach()
{
    cout<<name<<"老师开始教"<<classes<<"课程了"<<endl;
}
void Teacher::introduce()
{
    cout<<"大家好我的名字是"<<name<<"我教的班级是"<<classes<<endl<<"\n";
}
Student::Student(string name,string leaclasses) : Person(name)
{
    classes=leaclasses;
}

void Student::learn()
{
    cout<<name<<"同学开始学习"<<classes<<"课程了"<<endl;
}

void Student ::introduce()
{
    cout<<"大家好我的名字是"<<name<<"我参加学习的班级是"<<classes<<endl<<"\n";
}

TeachingStudent::TeachingStudent(string name,string teaclasses,string leaclasses) : Teacher(name, teaclasses) , Student(name, leaclasses)
{

}

void TeachingStudent::introduce()
{
    cout<<"大家好我的名字是"<<Student::name<<"我帮助教学班级是"<<Student::classes<<endl;
    cout<<"而且我参加课程的名字是"<<Teacher::classes<<endl<<"\n";
}


int main()
{
    Teacher teacher("小甲鱼","C++快速入门");
    teacher.teach();
    teacher.introduce();

    Student student("W小鱼油","C++快速入门");
    student.learn();
    student.introduce();

    TeachingStudent ts("帅学长","C++快速入门","C++快速进阶");
    ts.introduce();

    return 0;
}
