#pragma once
#include "IFlyingStrategy.h"

class BasicFlying
	: public IFlyingStrategy
{
public:
	void fly() override;
};
