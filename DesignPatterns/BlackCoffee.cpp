#include "BlackCoffee.h"

using namespace Decorator;

BlackCoffee::BlackCoffee(double cost) : _cost(cost)
{
}

double BlackCoffee::cost()
{
	return this->_cost;
}
