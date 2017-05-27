#pragma once

#include "ICoffee.h"

namespace Decorator
{
	class BlackCoffee : public ICoffee
	{
	private:
		double _cost;

	public:
		explicit BlackCoffee(double cost);

		double cost() override;
	};
}
