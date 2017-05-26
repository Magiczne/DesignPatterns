#pragma once
#include <string>

class Circle
{
private:
	std::string _name = "Circle";

public:
	void draw(int x, int y) const;
};
