#pragma once

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
private:
	Beverage *_component;
public:
	CondimentDecorator(Beverage *obj)
	{
		_component = obj;
	}
	
	double cost()
	{
		if (_component != nullptr)
			return _component->cost();
		return 0;
	}

	string getDescription()
	{
		return _component->getDescription();
	}
	~CondimentDecorator()
	{
		if (_component != nullptr)
		{
			delete _component;
		}
	}
};

class Milk : public CondimentDecorator
{
public:
	Milk(Beverage *obj) : CondimentDecorator(obj){};
	double cost()
	{
		return 2.0f+CondimentDecorator::cost();
	}
	string getDescription()
	{
		return CondimentDecorator::getDescription() + "+우유";
	}
};

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage *obj) : CondimentDecorator(obj){};
	double cost()
	{
		return 2.0f + CondimentDecorator::cost();
	}
	string getDescription()
	{
		return CondimentDecorator::getDescription() + "+모카";
	}
};