#pragma once

#include <memory>

class IItem
{
public:
	virtual std::shared_ptr<IItem> clone() = 0;

	virtual ~IItem() = default;
};
