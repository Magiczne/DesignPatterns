#include "PeopleMediator.h"
#include "Person.h"

using namespace std;
using namespace Mediator;

void PeopleMediator::registerPerson(shared_ptr<Person> person)
{
	person->mediator(make_shared<PeopleMediator>(*this));

	this->_people.insert(
		pair<string, shared_ptr<Person>>(person->name(), person)
	);
}

void PeopleMediator::sendMessage(string name, string message)
{
	this->_people[name]->listen(message);
}
