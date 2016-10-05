#pragma once

class Observer
{
public:
	virtual void notify(int damage);
};

class ConcreateObserverA : public Observer { void notify(int damage); };
class ConcreateObserverB : public Observer { void notify(int damage); };