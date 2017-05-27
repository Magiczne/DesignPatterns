#pragma once

#include "IItem.h"

namespace Prototype
{
	class Package : public IItem
	{
	private:
		int _itemsInside;

	public:
		explicit Package(int itemsInside);

		int itemsInside() const;

		std::shared_ptr<IItem> clone() override;
	};
}
