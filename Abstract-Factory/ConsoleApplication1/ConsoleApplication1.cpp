// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include "PlaystationStore.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	PlaystationStore *store = new PlaystationStore2();
	Playstation *station = store->orderPlayStation(2);
	if (station)
		cout << station->getVersion() << endl;

	return 0;
}

