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
		cout << " 검격 " << endl;
	}
	void equip()
	{
		cout << "검 아이템을 장착 했습니다." << endl;
	}
};

class Gun : public Weapon
{
public:
	void use(void)
	{
		cout << " 총탄 발사 " << endl;
	}
	void equip()
	{
		cout << "총  아이템을 장착 했습니다." << endl;
	}
};

