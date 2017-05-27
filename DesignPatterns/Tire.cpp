#include "Tire.h"

using namespace Builder;

Tire::Tire(std::string treadType)
{
	this->_treadType = treadType;
}

std::string Tire::treadType() const
{
	return this->_treadType;
}
