#pragma once

#include "IToyFactory.h"

namespace AbstractFactory
{
	class IToy;

	class CarFactory : public IToyFactory
	{
	public:
		std::shared_ptr<IToy> createToy() override;
	};
}
