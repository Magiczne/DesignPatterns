#pragma once

#include "IToyFactory.h"

class CarFactory : public IToyFactory
{
public:
	std::shared_ptr<IToy> createToy() override;
};