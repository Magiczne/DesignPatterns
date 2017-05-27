#pragma once

#include "CoffeeDecorator.h"

namespace Decorator
{
	class WithMilk : public CoffeeDecorator
	{
	private:
		double _milkCost = 0.5;

	public:
		explicit WithMilk(std::shared_ptr<ICoffee> coffee);

		double cost() override;
	};
}
