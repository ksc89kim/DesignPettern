#include "Subject.h"

void Subject::addObserver(Observer *observer)
{
	observers.push_back(observer);
}

void Subject::removeObserver(Observer *observer)
{
	for (std::vector<Observer*>::iterator toRemove = observers.begin(); toRemove != observers.end(); ++toRemove)
	{
		if (*toRemove == observer)
		{
			observers.erase(toRemove);
			break;
		}
	}
}

void Subject::notifyObservers(int damag)
{
	for (auto o : observers)
	{
		if (o != nullptr)
			o->notify(damag);
	}
}