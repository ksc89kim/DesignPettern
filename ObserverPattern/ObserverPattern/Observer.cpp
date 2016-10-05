#include "Observer.h"
#include <iostream>

void Observer::notify(int damage)
{
	std::cout << "notified" << damage << std::endl;
}

void ConcreateObserverA::notify(int damage)
{
	std::cout << "ConcreateObserverA notified" << damage << std::endl;
}

void ConcreateObserverB::notify(int damage)
{
	std::cout << "ConcreateObserverB notified" << damage << std::endl;
}