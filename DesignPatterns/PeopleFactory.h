#pragma once

#include "PersonType.h"

#include <memory>

namespace FactoryMethod
{
	class IPerson;

	class PeopleFactory
	{
	public:
		std::shared_ptr<IPerson> createPerson(PersonType type) const;
	};
}
