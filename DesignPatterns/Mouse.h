#pragma once

#include "IComputerPart.h"

namespace Visitor
{
	class Mouse : public IComputerPart
	{
	public:
		void accept(std::shared_ptr<IComputerPartVisitor> visitor) override;
	};
}
