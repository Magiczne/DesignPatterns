#include "SportsWheelBuilder.h"
#include "Rim.h"
#include "Tire.h"

using namespace std;
using namespace Builder;

shared_ptr<Rim> SportsWheelBuilder::rim()
{
	return make_shared<Rim>(16);
}

shared_ptr<Tire> SportsWheelBuilder::tire()
{
	return make_shared<Tire>("sports");
}
