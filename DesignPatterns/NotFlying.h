#pragma once
#include "IFlyingStrategy.h"

class NotFlying
	: public IFlyingStrategy
{
public:
	void fly() override;
};