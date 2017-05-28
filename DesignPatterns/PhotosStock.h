#pragma once

namespace Command
{
	class PhotosStock
	{
	private:
		int _quantity = 5;

	public:
		void buy() const;
		void sell() const;
	};
}