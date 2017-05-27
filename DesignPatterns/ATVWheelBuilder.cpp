#include "ATVWheelBuilder.h"
#include "Rim.h"
#include "Tire.h"

using namespace std;
using namespace Builder;

shared_ptr<Rim> ATVWheelBuilder::rim()
{
	return make_shared<Rim>(18);
}

shared_ptr<Tire> ATVWheelBuilder::tire()
{
	return make_shared<Tire>("atv");
}
