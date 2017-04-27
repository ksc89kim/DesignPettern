#pragma once

#include "PizzaBuilder.h"

class Waiter
{
private:
	PizzaBuilder *_pizzaBuilder;

public:
	Waiter();
	~Waiter();

	void setPizzaBuilder(PizzaBuilder *b) { _pizzaBuilder = b; }
	Pizza *getPizza() { return _pizzaBuilder->getPizza();  }
	void construcePizza(){
		_pizzaBuilder->createNewPizzaProduct();
		_pizzaBuilder->buildDough();
		_pizzaBuilder->buildSauce();
		_pizzaBuilder->buildTopping();
	}
};

