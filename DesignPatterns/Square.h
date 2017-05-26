#pragma once
#include <string>

class Square
{
private:
	std::string _name = "Square";

public:
	void draw(int x, int y) const;
};
