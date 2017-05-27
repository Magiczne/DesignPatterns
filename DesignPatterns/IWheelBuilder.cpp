#include "IWheelBuilder.h"
#include "Wheel.h"

using namespace std;
using namespace Builder;

shared_ptr<Wheel> IWheelBuilder::build()
{
	auto wheel = make_shared<Wheel>();
	wheel->rim(this->rim());
	wheel->tire(this->tire());

	return wheel;
}
