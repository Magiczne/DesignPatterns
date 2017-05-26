#pragma once

class IShape
{
public:
	virtual void draw(int x, int y) = 0;

	virtual ~IShape() = default;
};