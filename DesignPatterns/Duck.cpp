#include "Duck.h"

using namespace std;

void Duck::fly() const
{
	this->_flyStrategy->fly();
}

void Duck::flyStrategy(shared_ptr<IFlyingStrategy> value)
{
	this->_flyStrategy = value;
}