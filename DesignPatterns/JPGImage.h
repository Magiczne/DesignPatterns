#pragma once

#include "IImage.h"
#include <string>

class JPGImage 
	: public IImage
{
private:
	std::string _filename;

public:
	explicit JPGImage(std::string filename);

	void show() override;
};