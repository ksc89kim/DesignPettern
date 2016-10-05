// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

