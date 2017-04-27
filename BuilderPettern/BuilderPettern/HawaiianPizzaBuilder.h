#pragma once

#include "PizzaBuilder.h"

class HawaiianPizzaBuilder : public PizzaBuilder
{
public:
	HawaiianPizzaBuilder();
	~HawaiianPizzaBuilder();

	void buildDough() { _pizza->setDough("cross"); }
	void buildSauce() { _pizza->setSauce("mild"); }
	void buildTopping() { _pizza->setTopping("ham and pinapple"); }
};

