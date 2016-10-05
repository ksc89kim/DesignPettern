// ObserverPattern.cpp : 기본 프로젝트 파일입니다.

#include "stdafx.h"
#include "Observer.h"
#include "Subject.h"
#include <iostream>

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{

	Observer *observerA = new ConcreateObserverA();
	Observer *observerB = new ConcreateObserverB();
	Subject *subject = new Subject();
	subject->addObserver(observerA);
	subject->notifyObservers(1);
	subject->addObserver(observerB);
	subject->notifyObservers(2);
    return 0;
}
