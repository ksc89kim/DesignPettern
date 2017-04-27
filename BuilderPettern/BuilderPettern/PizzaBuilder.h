#pragma once
#include <iostream>
#include <string>
#include "Pizza.h"

class PizzaBuilder
{
protected:
	Pizza *_pizza;
public:
	PizzaBuilder();
	~PizzaBuilder();

	Pizza *getPizza() { return _pizza; }

	void createNewPizzaProduct() { _pizza = new Pizza(); }

	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildTopping() = 0;
};

