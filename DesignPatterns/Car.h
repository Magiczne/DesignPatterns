#pragma once

#include "IToy.h"

class Car : public IToy
{
public:
	std::string name() override;
};