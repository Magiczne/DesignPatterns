#pragma once

#include "IToyFactory.h"

namespace AbstractFactory
{
	class IToy;

	class BarbieFactory : public IToyFactory
	{
	public:
		std::shared_ptr<IToy> createToy() override;
	};
}
