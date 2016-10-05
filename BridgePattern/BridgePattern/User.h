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
		cout << "�ʺ����� ���� : ";
		weapon->use();
	}
	Beginner(Weapon *weapon)
	{
		cout << "������ ������ ���� : ";
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
		cout << "�������� ���� : ";
		weapon->use();
	}
	Exporter(Weapon *weapon)
	{
		cout << "������ ������ ���� : ";
		weapon->equip();
		this->weapon = weapon;
	}
protected:
	Weapon *weapon;

};