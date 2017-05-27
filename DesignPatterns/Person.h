#pragma once

#include <memory>
#include <string>

namespace Mediator
{
	class IMediator;

	class Person
	{
	private:
		std::shared_ptr<IMediator> _mediator;
		std::string _name;

	public:
		explicit Person(std::string name);

		void mediator(std::shared_ptr<IMediator> value);
		std::string name() const;

		void tell(std::string name, std::string message) const;
		void listen(std::string message) const;
	};
}
