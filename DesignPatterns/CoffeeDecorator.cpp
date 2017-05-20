#include "CoffeeDecorator.h"

using namespace std;

CoffeeDecorator::CoffeeDecorator(shared_ptr<ICoffee> coffee)
{
	this->_coffee = coffee;
}

double CoffeeDecorator::cost()
{
	return this->_coffee->cost();
}