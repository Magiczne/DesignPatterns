#include "TakeMoney.h"
#include "VendingMachine.h"
#include "DisposeItem.h"

#include <iostream>

using namespace std;
using namespace State;

void TakeMoney::disposeItem(VendingMachine* machine)
{
	cout << "Changing state to DisposeItem" << endl;

	machine->currentState(make_shared<DisposeItem>());
}
