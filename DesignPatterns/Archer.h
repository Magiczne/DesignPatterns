#pragma once

#include "IWarrior.h"

class Archer 
	: public IWarrior
{
public:
	void attack() override;
};