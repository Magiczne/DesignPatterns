#include "RichBidder.h"

#include <iostream>

using namespace std;
using namespace Observer;

RichBidder::RichBidder(int cash)
	: Bidder(cash)
{
}

void RichBidder::bidChanged(int bid)
{
	if (bid < this->cash())
	{
		cout << "I can bid more!" << endl;
	}
	else
	{
		cout << "I can't afford to bid more" << endl;
	}
}
