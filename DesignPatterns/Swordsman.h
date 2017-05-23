#pragma once

#include "IWarrior.h"

class Swordsman
	: public IWarrior
{
public:
	void attack() override;
};