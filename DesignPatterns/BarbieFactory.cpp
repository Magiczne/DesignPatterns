#include "BarbieFactory.h"
#include "Barbie.h"

using namespace std;
using namespace AbstractFactory;

shared_ptr<IToy> BarbieFactory::createToy()
{
	return make_shared<Barbie>();
}
