#pragma once

#include "IToyFactory.h"

class BarbieFactory : public IToyFactory
{
public:
	std::shared_ptr<IToy> createToy() override;
};