#include "Rim.h"

using namespace Builder;

Rim::Rim(int size)
{
	this->_size = size;
}

int Rim::size() const
{
	return this->_size;
}
