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
    cout<<name<<"��ʦ��ʼ��"<<classes<<"�γ���"<<endl;
}
void Teacher::introduce()
{
    cout<<"��Һ��ҵ�������"<<name<<"�ҽ̵İ༶��"<<classes<<endl<<"\n";
}
Student::Student(string name,string leaclasses) : Person(name)
{
    classes=leaclasses;
}

void Student::learn()
{
    cout<<name<<"ͬѧ��ʼѧϰ"<<classes<<"�γ���"<<endl;
}

void Student ::introduce()
{
    cout<<"��Һ��ҵ�������"<<name<<"�Ҳμ�ѧϰ�İ༶��"<<classes<<endl<<"\n";
}

TeachingStudent::TeachingStudent(string name,string teaclasses,string leaclasses) : Teacher(name, teaclasses) , Student(name, leaclasses)
{

}

void TeachingStudent::introduce()
{
    cout<<"��Һ��ҵ�������"<<Student::name<<"�Ұ�����ѧ�༶��"<<Student::classes<<endl;
    cout<<"�����Ҳμӿγ̵�������"<<Teacher::classes<<endl<<"\n";
}


int main()
{
    Teacher teacher("С����","C++��������");
    teacher.teach();
    teacher.introduce();

    Student student("WС����","C++��������");
    student.learn();
    student.introduce();

    TeachingStudent ts("˧ѧ��","C++��������","C++���ٽ���");
    ts.introduce();

    return 0;
}
