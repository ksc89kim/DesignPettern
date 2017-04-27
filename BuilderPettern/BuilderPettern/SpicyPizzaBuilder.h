#pragma once

#include "PizzaBuilder.h"

class SpicyPizzaBuilder : public PizzaBuilder
{
public:
	SpicyPizzaBuilder();
	~SpicyPizzaBuilder();

	void buildDough() { _pizza->setDough("pan baked"); }
	void buildSauce() { _pizza->setSauce("hot"); }
	void buildTopping() { _pizza->setTopping("pepperoni an salami"); }
};

