#include "PeopleFactory.h"

#include "Peasant.h"
#include "Townsman.h"

using namespace std;
using namespace FactoryMethod;

shared_ptr<IPerson> PeopleFactory::createPerson(PersonType type) const
{
	switch (type)
	{
	case Rural:
		return make_shared<Peasant>();
	case Urban:
		return make_shared<Townsman>();
	default:
		throw exception("Invalid type");
	}
}
