#pragma once

#include "IShape.h"
#include "Circle.h"

class CircleAdapter
	: public IShape
{
private:
	Circle _adaptee;

public:
	void draw(int x, int y) override;
};