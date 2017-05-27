#include "Duck.h"
#include "IFlyingStrategy.h"

using namespace std;
using namespace Strategy;

void Duck::fly() const
{
	this->_flyStrategy->fly();
}

void Duck::flyStrategy(shared_ptr<IFlyingStrategy> value)
{
	this->_flyStrategy = value;
}
