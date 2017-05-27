#include "Army.h"

using namespace std;
using namespace Composite;

void Army::call(shared_ptr<IWarrior> warrior)
{
	this->_warriors.push_back(warrior);
}

void Army::release(shared_ptr<IWarrior> warrior)
{
	this->_warriors.erase(
		find(
			this->_warriors.begin(),
			this->_warriors.end(),
			warrior
		)
	);
}

void Army::attack()
{
	for (const auto& warrior : this->_warriors)
	{
		warrior->attack();
	}
}
