#include "Mouse.h"
#include "IComputerPartVisitor.h"

using namespace std;
using namespace Visitor;

void Mouse::accept(shared_ptr<IComputerPartVisitor> visitor)
{
	visitor->visit(*this);
}
