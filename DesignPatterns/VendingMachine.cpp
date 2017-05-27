#include "VendingMachine.h"
#include "VendingMachineState.h"
#include "TakeMoney.h"

using namespace std;
using namespace State;

VendingMachine::VendingMachine(string name)
{
	this->_currentState = make_shared<TakeMoney>();
	this->_name = name;
}

void VendingMachine::currentState(shared_ptr<VendingMachineState> state)
{
	this->_currentState = state;
}

string VendingMachine::name() const
{
	return this->_name;
}

void VendingMachine::takeMoney()
{
	this->_currentState->takeMoney(this);
}

void VendingMachine::disposeItem()
{
	this->_currentState->disposeItem(this);
}
