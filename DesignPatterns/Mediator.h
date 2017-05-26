#pragma once

#include <map>

#include "IMediator.h"
#include "Person.h"

class Mediator
	: public IMediator
{
private:
	std::map<std::string, std::shared_ptr<Person>> _people;

public:
	void registerPerson(std::shared_ptr<Person> person);

	void sendMessage(std::string name, std::string message) override;
};