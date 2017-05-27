#include "SquareAdapter.h"

using namespace Adapter;

void SquareAdapter::draw(int x, int y)
{
	this->_adaptee.draw(x, y);
}
