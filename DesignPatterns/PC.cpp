#include "PC.h"
#include "Mouse.h"
#include "Keyboard.h"
#include "IComputerPartVisitor.h"

using namespace std;
using namespace Visitor;

PC::PC()
{
	this->_parts.push_back(make_unique<Mouse>());
	this->_parts.push_back(make_unique<Keyboard>());
}

void PC::accept(shared_ptr<IComputerPartVisitor> visitor)
{
	for(const auto& part : this->_parts)
	{
		part->accept(visitor);
	}

	visitor->visit(*this);
}
