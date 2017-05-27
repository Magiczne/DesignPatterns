#include "CarFactory.h"
#include "Car.h"

using namespace std;
using namespace AbstractFactory;

shared_ptr<IToy> CarFactory::createToy()
{
	return make_shared<Car>();
}
