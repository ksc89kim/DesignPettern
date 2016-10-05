#include "Playstation.h"


int Playstation::setVersion(int version)
{
	this->version = version;
	return version;
}

int Playstation::getVersion()
{
	return this->version;
}