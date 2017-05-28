#include "DisplayComputerPartVisitor.h"

#include <iostream>

using namespace std;
using namespace Visitor;

void DisplayComputerPartVisitor::visit(const Mouse& mouse)
{
	cout << "Displaying Mouse" << endl;
}

void DisplayComputerPartVisitor::visit(const Keyboard& keyboard)
{
	cout << "Displaying Keyboard" << endl;
}

void DisplayComputerPartVisitor::visit(const PC& pc)
{
	cout << "Displaying PC" << endl;
}
