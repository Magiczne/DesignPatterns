#include "WithMilk.h"

using namespace Decorator;

WithMilk::WithMilk(std::shared_ptr<ICoffee> coffee) : CoffeeDecorator(coffee)
{
}

double WithMilk::cost()
{
	return CoffeeDecorator::cost() + this->_milkCost;
}
