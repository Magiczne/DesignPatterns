#pragma once

#include "IToy.h"

#include <memory>

class IToyFactory
{
public:
	virtual std::shared_ptr<IToy> createToy() = 0;

	virtual ~IToyFactory() = default;
};