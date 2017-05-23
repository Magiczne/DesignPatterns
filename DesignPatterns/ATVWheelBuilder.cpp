#include "ATVWheelBuilder.h"

using namespace std;

shared_ptr<Rim> ATVWheelBuilder::rim()
{
	return make_shared<Rim>(18);
}

shared_ptr<Tire> ATVWheelBuilder::tire()
{
	return make_shared<Tire>("atv");
}