#pragma once

#include "IWheelBuilder.h"

namespace Builder
{
	class Rim;
	class Tire;

	class SportsWheelBuilder
		: public IWheelBuilder
	{
	public:
		std::shared_ptr<Rim> rim() override;
		std::shared_ptr<Tire> tire() override;
	};
}
