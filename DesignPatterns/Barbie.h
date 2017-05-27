#pragma once

#include "IToy.h"

namespace AbstractFactory
{
	class Barbie : public IToy
	{
	public:
		std::string name() override;
	};
}
