#include "BlackCoffee.h"

BlackCoffee::BlackCoffee(double cost)
	: _cost(cost) {}

double BlackCoffee::cost()
{
	return this->_cost;
}
