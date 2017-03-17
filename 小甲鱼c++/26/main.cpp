#include <iostream>
#include<string>
#include<stdlib.h> //为了abs函数加的库

using namespace std;

class Rational
{
public:
    Rational(int num,int denom); //num分子 denom分母

    Rational operator+(Rational rhs);  //这里选择传值而不是传指针引用，是为了不改变被加数本身的值， right hand side右操作数
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);

    void print();
private:
    void normalize();//对分数简化处理

    int numerator;
    int denominator; //分母

    friend   ostream& operator<<(ostream& os,Rational r);
};

Rational::Rational(int num,int denom)
{
    numerator=num;
    denominator=denom;

    normalize();
}

//只允许分子为负数   辗转求余将分数约分
void Rational::normalize()
{
        if(denominator<0)
        {
            numerator=-numerator;
            denominator=-denominator;
        }

        int a=abs(numerator);
        int b=abs(denominator);

        //求最大公约数    两数相除    （被除数，除数）  除数作为新的被除数，商作为新的除数    一直到除数b最后等于0   最大公约数a
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

    return   Rational(a*d+c*b,b*d);   //构造一个新的有理数    返回一个有理数     返回这个类型就由这个类型的对象接着就行了
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
    //分子分母颠倒；
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

//声明友元函数
ostream& operator<<(ostream& os,Rational r);


int main()
{
   Rational r1(2,16);  //构造一个有理数
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

//定义友元函数    重载<< 让他可以接受我的实数类
ostream& operator<<(ostream& os,Rational r)
{
    os<<r.numerator<<"/"<<r.denominator;
}
