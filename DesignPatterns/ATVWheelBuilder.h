#pragma once

#include "IWheelBuilder.h"

namespace Builder
{
	class Rim;
	class Tire;

	class ATVWheelBuilder
		: public IWheelBuilder
	{
	public:
		std::shared_ptr<Rim> rim() override;
		std::shared_ptr<Tire> tire() override;
	};
}
