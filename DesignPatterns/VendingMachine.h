#pragma once

#include <memory>
#include <string>

namespace State
{
	class VendingMachineState;

	class VendingMachine
	{
	private:
		std::shared_ptr<VendingMachineState> _currentState;
		std::string _name;

	public:
		explicit VendingMachine(std::string name);

		void currentState(std::shared_ptr<VendingMachineState> state);
		std::string name() const;

		void takeMoney();
		void disposeItem();
	};
}
