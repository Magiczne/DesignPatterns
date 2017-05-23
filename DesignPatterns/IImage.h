#pragma once

class IImage
{
public:
	virtual void show() = 0;

	virtual ~IImage() = default;
};