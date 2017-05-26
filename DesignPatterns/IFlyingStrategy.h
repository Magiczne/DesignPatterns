#pragma once

class IFlyingStrategy
{
public:
	virtual void fly() = 0;

	virtual ~IFlyingStrategy() = default;
};