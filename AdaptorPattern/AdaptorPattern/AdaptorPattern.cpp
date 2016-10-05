// AdaptorPattern.cpp : 기본 프로젝트 파일입니다.

#include "stdafx.h"
#include <iostream>


typedef int Coordinate;
typedef int Dimension;

using namespace System;
using namespace std;

class Rectangle
{
public:
	virtual void draw() = 0;
};

class LegacyRectangle
{
public:
	LegacyRectangle(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2)
	{
		x1_ = x1;
		y1_ = y1;
		x2_ = x2;
		y2_ = y2;
		cout << "LegacyRectangle:  create.  (" << x1_ << "," << y1_ << ") => ("
			<< x2_ << "," << y2_ << ")" << endl;
	}
	void oldDraw()
	{
		cout << "LegacyRectangle:  oldDraw.  (" << x1_ << "," << y1_ <<
			") => (" << x2_ << "," << y2_ << ")" << endl;
	}
private:
	Coordinate x1_;
	Coordinate y1_;
	Coordinate x2_;
	Coordinate y2_;
};


// Adapter wrapper
class RectangleAdapter : public Rectangle, private LegacyRectangle
{
public:
	RectangleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h) :
		LegacyRectangle(x, y, x + w, y + h)
	{
		cout << "RectangleAdapter: create.  (" << x << "," << y <<
			"), width = " << w << ", height = " << h << endl;
	}
	virtual void draw()
	{
		cout << "RectangleAdapter: draw." << endl;
		oldDraw();
	}
};


int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");

	Rectangle *r = new RectangleAdapter(120, 200, 60, 40);
	r->draw();
    return 0;
}