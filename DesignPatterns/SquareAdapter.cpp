#include "SquareAdapter.h"

void SquareAdapter::draw(int x, int y)
{
	this->_adaptee.draw(x, y);
}