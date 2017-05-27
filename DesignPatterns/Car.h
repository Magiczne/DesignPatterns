#pragma once

#include "IToy.h"

namespace AbstractFactory
{
	class Car : public IToy
	{
	public:
		std::string name() override;
	};
}
