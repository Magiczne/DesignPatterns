#pragma once

#include <memory>

namespace Builder
{
	class Rim;
	class Tire;
	class Wheel;

	class IWheelBuilder
	{
	public:
		virtual std::shared_ptr<Rim> rim() = 0;
		virtual std::shared_ptr<Tire> tire() = 0;

		virtual std::shared_ptr<Wheel> build();

		virtual ~IWheelBuilder() = default;
	};
}
