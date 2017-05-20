#pragma once

#include "ICoffee.h"

class BlackCoffee : public ICoffee
{
private:
	double _cost;

public:
	explicit BlackCoffee(double cost);

	double cost() override;
};
