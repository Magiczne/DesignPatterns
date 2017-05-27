#pragma once

#include "IMediator.h"

#include <map>
#include <memory>

namespace Mediator
{
	class Person;

	class PeopleMediator : public IMediator
	{
	private:
		std::map<std::string, std::shared_ptr<Person>> _people;

	public:
		void registerPerson(std::shared_ptr<Person> person);

		void sendMessage(std::string name, std::string message) override;
	};
}
