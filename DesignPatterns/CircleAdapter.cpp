#include "CircleAdapter.h"

void CircleAdapter::draw(int x, int y)
{
	this->_adaptee.draw(x, y);
}