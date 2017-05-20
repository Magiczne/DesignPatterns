#pragma once

class ICoffee
{
public:
	virtual double cost() = 0;

	virtual ~ICoffee() = default;
};