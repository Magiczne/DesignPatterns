#pragma once
#pragma once

#include "IWheelBuilder.h"

class ATVWheelBuilder
	: public IWheelBuilder
{
public:
	std::shared_ptr<Rim> rim() override;
	std::shared_ptr<Tire> tire() override;
};