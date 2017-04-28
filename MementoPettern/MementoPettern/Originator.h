#pragma once

#include "Memento.h"

class Originator
{
private:
	string _state;

public:
	Originator();
	~Originator();

	void setState(string state)
	{
		_state = state;
		cout << "Originator: Setting state to " << state << endl;
	}

	void setMemento(Memento *m){
		if (m)
		{
			_state = m->getState();
			delete m;

			cout << "Originator: State after restoring from Memento " << _state << endl;
		}
	}
	
	Memento* createMemento()
	{
		cout << "Originator: Create to Memento" << _state << endl;
		return new Memento(_state);
	}

};

