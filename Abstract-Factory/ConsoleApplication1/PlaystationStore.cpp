#include "PlaystationStore.h"

Playstation *PlaystationStore::createPlayStation(int version)
{
	Playstation *playstation = nullptr;
	return playstation;
}

Playstation *PlaystationStore::orderPlayStation(int version)
{
	Playstation *playstation = createPlayStation(version);
	return playstation;
}

Playstation *PlaystationStore1::createPlayStation(int version)
{
	Playstation *playstation = nullptr;

	switch (version)
	{
	case 2:
		playstation = new Playstation2();
		break;
	case 4:
		playstation = new Playstation4();
	default:
		break;
	}
	if (playstation)
		playstation->setVersion(version);
	return playstation;
}

Playstation *PlaystationStore2::createPlayStation(int version)
{
	Playstation *playstation = nullptr;

	switch (version)
	{
	case 1:
		playstation = new Playstation1();
		break;
	case 3:
		playstation = new Playstation3();
	default:
		break;
	}
	if (playstation)
		playstation->setVersion(version);
	return playstation;
}