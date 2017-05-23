#include "IWheelBuilder.h"

using namespace std;

shared_ptr<Wheel> IWheelBuilder::build()
{
	auto wheel = make_shared<Wheel>();
	wheel->rim(this->rim());
	wheel->tire(this->tire());

	return wheel;
}