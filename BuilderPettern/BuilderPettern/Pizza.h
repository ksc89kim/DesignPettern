#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pizza
{
private:
	string _dough;
	string _sauce;
	string _topping;

public:
	Pizza();
	~Pizza();

	void setDough(const string& d) {  _dough = d;  }
	void setSauce(const string& s) {  _sauce = s;  }
	void setTopping(const string& t) { _topping = t; }
	void showPizza(){
		cout << "Yummy ||!" << endl
			<< "Pizza with Dough as" << _dough
			<< ", Sauce as " << _sauce
			<< " and Topping as" << _topping
			<< "!!!" << endl;
	}
};

