
#pragma once

class Playstation
{
public:
	int setVersion(int version);
	int getVersion();
protected:
	int version;
};

class Playstation1 : public Playstation {};
class Playstation2 : public Playstation {};
class Playstation3 : public Playstation {};
class Playstation4 : public Playstation {};
class Playstation5 : public Playstation {};