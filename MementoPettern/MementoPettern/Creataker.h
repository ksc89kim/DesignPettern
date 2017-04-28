#pragma once

#include "Memento.h"
#include <stack>

class Creataker
{
private:
	stack<Memento*> _stack;

public:
	Creataker();
	~Creataker();

	void pushMemento(Memento *m) { _stack.push(m); }
	Memento *popMemento() { Memento *m = _stack.top(); _stack.pop(); return m; }
};

