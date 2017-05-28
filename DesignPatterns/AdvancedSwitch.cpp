#include "AdvancedSwitch.h"
#include "AdvancedSwitchImplementation.h"

using namespace std;
using namespace Bridge;

AdvancedSwitch::AdvancedSwitch()
{
	this->_implementation = make_unique<AdvancedSwitchImplementation>();
}

void AdvancedSwitch::flashlight()
{
	static_pointer_cast<AdvancedSwitchImplementation>(this->_implementation)->flashlight();
}
