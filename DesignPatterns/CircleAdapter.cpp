#include "CircleAdapter.h"

using namespace Adapter;

void CircleAdapter::draw(int x, int y)
{
	this->_adaptee.draw(x, y);
}
