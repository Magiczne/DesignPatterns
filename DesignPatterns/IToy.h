#pragma once

#include <string>

class IToy
{
public:
	virtual std::string name() = 0;

	virtual ~IToy() = default;
};
