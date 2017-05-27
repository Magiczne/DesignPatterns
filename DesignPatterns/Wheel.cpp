#include "Wheel.h"

using namespace Builder;

std::shared_ptr<Rim> Wheel::rim() const
{
	return this->_rim;
}

void Wheel::rim(std::shared_ptr<Rim> value)
{
	this->_rim = value;
}

std::shared_ptr<Tire> Wheel::tire() const
{
	return this->_tire;
}

void Wheel::tire(std::shared_ptr<Tire> value)
{
	this->_tire = value;
}
