// StrategyPattern.cpp : 기본 프로젝트 파일입니다.

#include "stdafx.h"
#include <iostream>

using namespace std;
using namespace System;

class Strategy{
public:
	virtual void execute() = 0;
};
class ConcreateStrategyA : public Strategy
{
public:
	void execute()
	{
		cout << "ConcreateStrategyA" << endl;
	}
};
class ConcreateStrategyB : public Strategy
{
public:
	void execute()
	{
		cout << "ConcreateStrategyB" << endl;
	}
};

class Context{
private:
	Strategy *stg;
public:
	void setStrategy(Strategy *st)
	{
		this->stg = st;
	}
	void perForm(){
		stg->execute();
	}
};


int main(array<System::String ^> ^args)
{
	Context *s = new Context();
	Strategy *a = new ConcreateStrategyA();
	s->setStrategy(a);
	s->perForm();
	Strategy *b = new ConcreateStrategyB();
	s->setStrategy(b);
	s->perForm();
    return 0;
}
