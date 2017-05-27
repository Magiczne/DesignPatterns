#include "VendingMachineState.h"
#include "VendingMachine.h"

#include <iostream>

using namespace std;
using namespace State;

void VendingMachineState::takeMoney(VendingMachine* machine)
{
	cout << machine->name() << " is taking money!" << endl;
}

void VendingMachineState::disposeItem(VendingMachine* machine)
{
	cout << machine->name() << " is disposing item!" << endl;
}
