#include "CarFactory.h"

#include "Car.h"

using namespace std;

shared_ptr<IToy> CarFactory::createToy()
{
	return make_shared<Car>();
}