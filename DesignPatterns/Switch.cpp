#include "Switch.h"
#include "SwitchImplementation.h"

using namespace std;
using namespace Bridge;

Switch::Switch()
{
	this->_implementation = make_shared<SwitchImplementation>();
}

void Switch::on()
{
	this->_implementation->on();
}

void Switch::off()
{
	this->_implementation->off();
}
