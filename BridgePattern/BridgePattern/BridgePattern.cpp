// BridgePattern.cpp : 기본 프로젝트 파일입니다.

#include "stdafx.h"
#include "User.h"
#include "Weapon.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
	
	Sword *sword = new Sword();
	Gun *gun = new Gun();

	Beginner *beginner = new Beginner(sword);
	Exporter *exporter = new Exporter(gun);
	beginner->execute();
	exporter->execute();

	delete beginner;
	delete exporter;
	delete sword;
	delete gun;

    return 0;
}
