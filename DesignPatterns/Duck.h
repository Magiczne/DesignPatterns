#pragma once

#include <memory>

#include "IFlyingStrategy.h"

class Duck
{
private:
	std::shared_ptr<IFlyingStrategy> _flyStrategy;

public:
	virtual ~Duck() = default;

	void fly() const;
	virtual void showMe() = 0;

	void flyStrategy(std::shared_ptr<IFlyingStrategy> value);
};