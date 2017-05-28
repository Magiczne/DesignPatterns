#include "TravelAgent.h"
#include "ICommand.h"

using namespace std;
using namespace Command;

void TravelAgent::takeOrder(shared_ptr<ICommand> order)
{
	this->_orders.push_back(order);
}

void TravelAgent::executeOrders()
{
	for(const auto& order : this->_orders)
	{
		order->execute();
	}

	this->_orders.clear();
}
