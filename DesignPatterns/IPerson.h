#pragma once

#include <string>

class IPerson
{
public:
	virtual std::string name() = 0;

	virtual ~IPerson();
};
