#pragma once

class IWarrior
{
public:
	virtual void attack() = 0;

	virtual ~IWarrior() = default;
};