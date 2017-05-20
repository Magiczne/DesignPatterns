#pragma once

#include "IPerson.h"
#include "PersonType.h"

#include <memory>

class PeopleFactory
{
public:
	std::shared_ptr<IPerson> createPerson(PersonType type) const;
};