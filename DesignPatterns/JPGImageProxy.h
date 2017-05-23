#pragma once

#include <memory>

#include "IImage.h"
#include "JPGImage.h"

//Virtual proxy type

class JPGImageProxy
	: public IImage
{
private:
	std::string _filename;
	std::shared_ptr<JPGImage> _image;

public:
	explicit JPGImageProxy(std::string filename);

	void show() override;
};