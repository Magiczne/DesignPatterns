#pragma once

#include "IImage.h"

#include <memory>
#include <string>

//Virtual proxy type

namespace Proxy
{
	class JPGImage;

	class JPGImageProxy : public IImage
	{
	private:
		std::string _filename;
		std::shared_ptr<JPGImage> _image;

	public:
		explicit JPGImageProxy(std::string filename);

		void show() override;
	};
}
