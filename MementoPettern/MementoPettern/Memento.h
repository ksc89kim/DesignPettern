#pragma once
#include <string>
#include <iostream>

using namespace std;

class Memento
{
private:
	string _state;

public:
	Memento();
	Memento(string state) { _state = state; }
	~Memento();

	string getState() const { return _state;  }
};

