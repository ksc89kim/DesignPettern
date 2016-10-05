#pragma once

#include <iostream>

using namespace std;

class Weapon{
public:
	virtual void use(void) = 0;
	virtual void equip() = 0;
};

class Sword :public Weapon
{
public:
	void use(void)
	{
		cout << " �˰� " << endl;
	}
	void equip()
	{
		cout << "�� �������� ���� �߽��ϴ�." << endl;
	}
};

class Gun : public Weapon
{
public:
	void use(void)
	{
		cout << " ��ź �߻� " << endl;
	}
	void equip()
	{
		cout << "��  �������� ���� �߽��ϴ�." << endl;
	}
};

