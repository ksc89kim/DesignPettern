// DecoratorPattern.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include "CondimentDecorator.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");

	Beverage *houseblend = new HouseBlend();
	houseblend = new Mocha(houseblend);
	houseblend = new Mocha(houseblend);
	houseblend = new Milk(houseblend);
	cout << houseblend->cost() << endl;
	cout << houseblend->getDescription().c_str() << endl;


    return 0;
}
