#pragma once

#include <iostream>
#include "Weapon.h"

using namespace std;

class User
{
public:
	virtual void execute() = 0;
};

class Beginner : public User
{
public:
	void execute()
	{
		cout << "초보자의 공격 : ";
		weapon->use();
	}
	Beginner(Weapon *weapon)
	{
		cout << "숙련자 아이템 장착 : ";
		weapon->equip();
		this->weapon = weapon;
	}
protected:
	Weapon *weapon;
};

class Exporter : public User
{
public:
	void execute()
	{
		cout << "숙련자의 공격 : ";
		weapon->use();
	}
	Exporter(Weapon *weapon)
	{
		cout << "숙련자 아이템 장착 : ";
		weapon->equip();
		this->weapon = weapon;
	}
protected:
	Weapon *weapon;

};