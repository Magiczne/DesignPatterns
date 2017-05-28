#pragma once

#include "IComputerPartVisitor.h"

namespace Visitor
{
	class DisplayComputerPartVisitor : public IComputerPartVisitor
	{
	public:
		void visit(const PC& pc) override;
		void visit(const Mouse& mouse) override;
		void visit(const Keyboard& keyboard) override;
	};
}
