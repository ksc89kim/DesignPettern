#pragma once
#include <iostream>
#include <string>

using namespace std;

class Beverage
{
public:
	virtual double cost() = 0;
	virtual string getDescription() = 0;
	virtual ~Beverage(){}
};

class Espresso : public Beverage
{
public:
	double cost()
	{
		return 1.99;
	}
	string getDescription()
	{
		return "����������";
	}
};

class HouseBlend : public Beverage
{
public:
	double cost()
	{
		return 0.89;
	}
	string getDescription()
	{
		return "�Ͽ콺 �귣�� Ŀ��";
	}
};