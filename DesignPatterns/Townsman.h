#pragma once

#include "IPerson.h"

namespace FactoryMethod
{
	class Townsman : public IPerson
	{
	public:
		std::string name() override;
	};
}
