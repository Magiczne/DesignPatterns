#include "DisposeItem.h"
#include "TakeMoney.h"
#include "VendingMachine.h"

#include <iostream>

using namespace std;
using namespace State;

void DisposeItem::takeMoney(VendingMachine* machine)
{
	cout << "Changing state to TakeMoney" << endl;

	machine->currentState(make_shared<TakeMoney>());
}
