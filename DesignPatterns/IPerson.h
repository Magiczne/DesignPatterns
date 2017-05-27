#pragma once

#include <string>

namespace FactoryMethod
{
	class IPerson
	{
	public:
		virtual std::string name() = 0;

		virtual ~IPerson() = default;
	};
}
