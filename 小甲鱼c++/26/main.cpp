#include <iostream>
#include<string>
#include<stdlib.h> //Ϊ��abs�����ӵĿ�

using namespace std;

class Rational
{
public:
    Rational(int num,int denom); //num���� denom��ĸ

    Rational operator+(Rational rhs);  //����ѡ��ֵ�����Ǵ�ָ�����ã���Ϊ�˲��ı䱻���������ֵ�� right hand side�Ҳ�����
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);

    void print();
private:
    void normalize();//�Է����򻯴���

    int numerator;
    int denominator; //��ĸ

    friend   ostream& operator<<(ostream& os,Rational r);
};

Rational::Rational(int num,int denom)
{
    numerator=num;
    denominator=denom;

    normalize();
}

//ֻ�������Ϊ����   շת���ཫ����Լ��
void Rational::normalize()
{
        if(denominator<0)
        {
            numerator=-numerator;
            denominator=-denominator;
        }

        int a=abs(numerator);
        int b=abs(denominator);

        //�����Լ��    �������    ����������������  ������Ϊ�µı�����������Ϊ�µĳ���    һֱ������b������0   ���Լ��a
        while(b>0)
        {
            int t=a%b;
            a=b;
            b=t;
        }

        numerator=numerator/a;
        denominator=denominator/a;

}

Rational Rational::operator+(Rational rhs)
{
    int a=numerator;
    int b=denominator;

    int c=rhs.numerator;
    int d=rhs.denominator;

    return   Rational(a*d+c*b,b*d);   //����һ���µ�������    ����һ��������     ����������;���������͵Ķ�����ž�����
}

Rational  Rational::operator-(Rational rhs)
{
    rhs.numerator=-rhs.numerator;

    return   operator+(rhs);

}

Rational Rational::operator*(Rational rhs)
{
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;

    return  Rational(a*c,b*d);
}

Rational Rational::operator/(Rational rhs)
{
    //���ӷ�ĸ�ߵ���
    int t=rhs.numerator;
    rhs.numerator=rhs.denominator;
    rhs.denominator=t;

    return  operator*(rhs);
}

void Rational::print()
{
    if(numerator%denominator==0)
        cout<<numerator/denominator;
    else
        cout<<numerator<<"/"<<denominator;
}

//������Ԫ����
ostream& operator<<(ostream& os,Rational r);


int main()
{
   Rational r1(2,16);  //����һ��������
   Rational r2(8,2);

   Rational res=r1+r2;
   r1.print();
   cout<<"+";
   r2.print();
   cout<<"=";
   res.print();
   cout<<endl;


   Rational res2=r1-r2;
   r1.print();
   cout<<"-";
   r2.print();
   cout<<"=";
   res2.print();
   cout<<endl;

   Rational res3=r1*r2;
   r1.print();
   cout<<"*";
   r2.print();
   cout<<"=";
   res3.print();
   cout<<endl;

   Rational res4=r1/r2;
   r1.print();
   cout<<"/";
   r2.print();
   cout<<"=";
   res4.print();
   cout<<endl;

   //another  nore efficient ouput way
   cout<<"=============================="<<endl;
   cout<<r1<<"+"<<r2<<"="<<r1+r2<<endl;
   cout<<r1<<"-"<<r2<<"="<<r1-r2<<endl;
   cout<<r1<<"*"<<r2<<"="<<r1*r2<<endl;
   cout<<r1<<"/"<<r2<<"="<<r1/r2<<endl;



    return 0;
}

//������Ԫ����    ����<< �������Խ����ҵ�ʵ����
ostream& operator<<(ostream& os,Rational r)
{
    os<<r.numerator<<"/"<<r.denominator;
}
