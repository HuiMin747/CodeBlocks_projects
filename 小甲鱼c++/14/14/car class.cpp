#include<iostream>
#include<string>
using namespace std;

class Car
{
public:
	string color;
	string engine;
	float  gas_tank;
	unsigned int wheel;

	void fill_tank(float liter); //方法原型：给汽车加油
};

void Car::fill_tank(float liter) //Car::说明这个函数是属于那个类的
{
	gas_tank += liter;
}

void main()
{
	system("pause");
}