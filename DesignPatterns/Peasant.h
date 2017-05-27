#pragma once

#include "IPerson.h"

namespace FactoryMethod
{
	class Peasant : public IPerson
	{
	public:
		std::string name() override;
	};
}
