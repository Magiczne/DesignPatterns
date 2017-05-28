#pragma once

namespace Visitor
{
	class PC;
	class Mouse;
	class Keyboard;

	class IComputerPartVisitor
	{
	public:
		virtual void visit(const PC& pc) = 0;
		virtual void visit(const Mouse& mouse) = 0;
		virtual void visit(const Keyboard& keyboard) = 0;

		virtual ~IComputerPartVisitor() = default;
	};
}
