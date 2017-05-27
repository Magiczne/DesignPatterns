#include "Person.h"
#include "IMediator.h"

#include <iostream>

using namespace std;
using namespace Mediator;

Person::Person(string name)
{
	this->_name = name;
}

void Person::mediator(shared_ptr<IMediator> value)
{
	this->_mediator = value;
}

string Person::name() const
{
	return this->_name;
}

void Person::tell(string name, string message) const
{
	this->_mediator->sendMessage(name, message);
}

void Person::listen(string message) const
{
	cout << this->name() << " received: " << message << endl;
}
