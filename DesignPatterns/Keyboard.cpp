#include "Keyboard.h"
#include "IComputerPartVisitor.h"

using namespace std;
using namespace Visitor;

void Keyboard::accept(shared_ptr<IComputerPartVisitor> visitor)
{
	visitor->visit(*this);
}
