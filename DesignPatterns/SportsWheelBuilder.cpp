#include "SportsWheelBuilder.h"

using namespace std;

shared_ptr<Rim> SportsWheelBuilder::rim()
{
	return make_shared<Rim>(16);
}

shared_ptr<Tire> SportsWheelBuilder::tire()
{
	return make_shared<Tire>("sports");
}