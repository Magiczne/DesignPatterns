#include "BarbieFactory.h"

#include "Barbie.h"

using namespace std;

shared_ptr<IToy> BarbieFactory::createToy()
{
	return make_shared<Barbie>();
}