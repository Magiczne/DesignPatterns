#pragma once

#include "IToy.h"

class Barbie : public IToy
{
public:
	std::string name() override;
};