#pragma once

#include <memory>
#include "Rim.h"
#include "Tire.h"
#include "Wheel.h"

class IWheelBuilder
{
public:
	virtual std::shared_ptr<Rim> rim() = 0;
	virtual std::shared_ptr<Tire> tire() = 0;

	virtual std::shared_ptr<Wheel> build();

	virtual ~IWheelBuilder() = default;
};