#pragma once

#include "ICoffee.h"

#include <memory>

class CoffeeDecorator : public ICoffee
{
protected:
	std::shared_ptr<ICoffee> _coffee;

public:
	explicit CoffeeDecorator(std::shared_ptr<ICoffee> coffee);

	double cost() override;
};
