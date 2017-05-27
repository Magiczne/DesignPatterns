#pragma once

#include <memory>

namespace Builder
{
	class Rim;
	class Tire;

	class Wheel
	{
	private:
		std::shared_ptr<Rim> _rim;
		std::shared_ptr<Tire> _tire;

	public:
		std::shared_ptr<Rim> rim() const;
		std::shared_ptr<Tire> tire() const;

		void rim(std::shared_ptr<Rim> value);
		void tire(std::shared_ptr<Tire> value);
	};
}
