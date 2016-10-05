
#pragma once
#include "Playstation.h"

class PlaystationStore
{
private:
	virtual Playstation* createPlayStation(int version);
public:
	Playstation* orderPlayStation(int version);
};

class PlaystationStore1 : public PlaystationStore
{
private:
	Playstation* createPlayStation(int version);
};

class PlaystationStore2 : public PlaystationStore
{
private:
	Playstation* createPlayStation(int version);
};