#pragma once

#include <string>

class Tire
{
private:
	std::string _treadType;

public:
	explicit Tire(std::string treadType);

	std::string treadType() const;
};