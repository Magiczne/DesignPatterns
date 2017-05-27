#include "Bidder.h"

using namespace Observer;

Bidder::Bidder(int cash)
{
	this->cash(cash);
}

int Bidder::cash() const
{
	return this->_cash;
}

void Bidder::cash(int value)
{
	this->_cash = value;
}
