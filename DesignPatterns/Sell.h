#pragma once

#include "ICommand.h"

#include <memory>

namespace Command
{
	class PhotosStock;

	class Sell : public ICommand
	{
	private:
		std::shared_ptr<PhotosStock> _stock;

	public:
		explicit Sell(std::shared_ptr<PhotosStock> stock);

		void execute() override;
	};
}
