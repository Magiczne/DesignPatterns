#pragma once

#include "ICommand.h"

#include <memory>

namespace Command
{
	class PhotosStock;

	class Buy : public ICommand
	{
	private:
		std::shared_ptr<PhotosStock> _stock;

	public:
		explicit Buy(std::shared_ptr<PhotosStock> stock);

		void execute() override;
	};
}
