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

	void fill_tank(float liter); //����ԭ�ͣ�����������
};

void Car::fill_tank(float liter) //Car::˵����������������Ǹ����
{
	gas_tank += liter;
}

void main()
{
	system("pause");
}