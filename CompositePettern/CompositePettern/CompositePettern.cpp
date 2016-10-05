// CompositePettern.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace System;

using std::cout;
using std::vector;
using std::string;

class Component
{
public:
	virtual void list() const = 0;
	virtual ~Component(){};
};

class Leaf :public Component{
public:
	explicit Leaf(int val) : value_(val)
	{

	}
	void list() const
	{
		cout << " " << value_ << "\n";
	}
private:
	int value_;
};

class Composite : public Component
{
public:
	explicit Composite(string id) : id_(id)
	{

	}
	void add(Component *obj)
	{
		table_.push_back(obj);
	}
	void list() const
	{
		cout << id_ << ":" << "\n";
		for (vector<Component*>::const_iterator it = table_.begin();
			it != table_.end(); ++it)
		{
			(*it)->list();
		}
	}
private:
	vector <Component*> table_;
	string id_;
};

int main(array<System::String ^> ^args)
{
	Leaf num0(0);
	Leaf num1(1);
	Leaf num2(2);
	Leaf num3(3);
	Leaf num4(4);
	Composite container1("Container 1");
	Composite container2("Container 2");
	container1.add(&num0);
	container1.add(&num1);

	container2.add(&num2);
	container2.add(&num3);
	container2.add(&num4);

	//container1.add(&container2);
	container1.list();

    return 0;
}
