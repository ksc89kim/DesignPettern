// BuilderPettern.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "HawaiianPizzaBuilder.h"
#include "SpicyPizzaBuilder.h"
#include "Waiter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Waiter waiter;

	HawaiianPizzaBuilder hawaiianPizzaBuilder;
	waiter.setPizzaBuilder(&hawaiianPizzaBuilder);
	waiter.construcePizza();
	Pizza *pizza = waiter.getPizza();
	pizza->showPizza();

	SpicyPizzaBuilder spicyPizzaBuilder;
	waiter.setPizzaBuilder(&spicyPizzaBuilder);
	waiter.construcePizza();
	pizza = waiter.getPizza();
	pizza->showPizza();

	return 0;
}

