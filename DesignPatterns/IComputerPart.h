#pragma once

#include <memory>

namespace Visitor
{
	class IComputerPartVisitor;

	class IComputerPart
	{
	public:
		virtual void accept(std::shared_ptr<IComputerPartVisitor> visitor) = 0;

		virtual ~IComputerPart() = default;
	};
}
