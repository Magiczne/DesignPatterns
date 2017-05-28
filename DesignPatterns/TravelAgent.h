#pragma once

#include <memory>
#include <vector>

namespace Command
{
	class ICommand;

	class TravelAgent
	{
	private:
		std::vector<std::shared_ptr<ICommand>> _orders;

	public:
		void takeOrder(std::shared_ptr<ICommand> order);
		void executeOrders();
	};
}
