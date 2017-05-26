#pragma once

#include "IShape.h"
#include "Square.h"

class SquareAdapter
	: public IShape
{
private:
	Square _adaptee;

public:
	void draw(int x, int y) override;
};