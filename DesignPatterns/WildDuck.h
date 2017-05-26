#pragma once

#include "Duck.h"

class WildDuck
	: public Duck
{
public:
	WildDuck();

	void showMe() override;
};