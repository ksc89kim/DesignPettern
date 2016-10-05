// CommandPattern.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using namespace System;
using namespace std;

class Command {
public:
	virtual void execute(void) = 0;
	virtual ~Command(){}
};

class Ingredient : public Command {
public:
	Ingredient(string amount, string ingredient)
	{
		_ingredient = ingredient;
		_amount = amount;
	}
	void execute(void)
	{
		cout << "+Add" << _amount << " of " << _ingredient << endl;
	}
private:
	string _ingredient;
	string _amount;
};

class Step :public Command{
public:
	Step(string action, string time)
	{
		_action = action;
		_time = time;
	}
	void execute(void){
		cout << " +" << _action << " for" << _time << endl;
	}
private:
	string _action;
	string _time;
};

class CmdStack{
public:
	void add(Command *c)
	{
		commands.push_back(c);
	}
	void createRecipe(void)
	{
		for (vector<Command*>::size_type x = 0; x < commands.size(); x++)
		{
			commands[x]->execute();
		}
	}
	void undo(void){
		if (commands.size() >= 1){
			commands.pop_back();
		}
		else
		{
			cout << "Cant undo" << endl;
		}
	}
private:
	vector<Command *> commands;
};

int main(array<System::String ^> ^args)
{
	CmdStack list;

    Console::WriteLine(L"Hello World");
	Ingredient first("2 tablespoonse", "vegetable oil");
	Ingredient second("3 cups", "rice");
	Ingredient third("1bottle", "Ketchup");
	Ingredient fourth("4 ounces", "peas");
	Ingredient fifth("1 teaspoon", "soy sauce");

	Step step("Stir-fry", "3-4 minutes");

	cout << "Recipe for simple Fried Rice" << endl;
	list.add(&first);
	list.add(&second);
	list.add(&third);
	list.undo();
	list.add(&fourth);
	list.add(&fifth);
	list.createRecipe();
	cout << "Enjoy!" << endl;

    return 0;
}
