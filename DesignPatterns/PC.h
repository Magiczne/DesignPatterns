#pragma once

#include <memory>
#include <vector>

namespace Visitor
{
	class IComputerPart;
	class IComputerPartVisitor;

	class PC
	{
	private:
		std::vector<std::unique_ptr<IComputerPart>> _parts;

	public:
		PC();

		void accept(std::shared_ptr<IComputerPartVisitor> visitor);
	};
}