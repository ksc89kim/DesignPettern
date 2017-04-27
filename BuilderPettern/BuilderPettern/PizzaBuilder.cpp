#include "stdafx.h"
#include "PizzaBuilder.h"


PizzaBuilder::PizzaBuilder()
{
}


PizzaBuilder::~PizzaBuilder()
{
	if (_pizza != NULL) delete _pizza;
}
