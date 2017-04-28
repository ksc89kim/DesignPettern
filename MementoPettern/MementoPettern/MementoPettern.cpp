// MementoPettern.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Creataker.h"
#include "Memento.h"
#include "Originator.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Creataker creataker;
	Originator *originator = new Originator();

	originator->setState("state 1");
	creataker.pushMemento(originator->createMemento());

	originator->setState("state 2");
	creataker.pushMemento(originator->createMemento());

	originator->setMemento(creataker.popMemento());
	originator->setMemento(creataker.popMemento());

	delete originator;

	return 0;
}

