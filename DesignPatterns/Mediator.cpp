#include "Mediator.h"

using namespace std;

void Mediator::registerPerson(shared_ptr<Person> person)
{
	person->mediator(make_shared<Mediator>(*this));

	this->_people.insert(
		pair<string, shared_ptr<Person>>(person->name(), person)
	);
}

void Mediator::sendMessage(string name, string message)
{
	this->_people[name]->listen(message);
}