#include "Auctioneer.h"
#include "Bidder.h"

using namespace std;
using namespace Observer;

void Auctioneer::acceptBid(int bid)
{
	if (bid > this->_currentBid)
	{
		this->_currentBid = bid;
		this->notifyBidders();
	}
}

void Auctioneer::addBidder(shared_ptr<Bidder> bidder)
{
	this->_bidders.push_back(bidder);
}

void Auctioneer::removeBidder(shared_ptr<Bidder> bidder)
{
	this->_bidders.erase(
		find(
			this->_bidders.begin(),
			this->_bidders.end(),
			bidder
		)
	);
}

void Auctioneer::notifyBidders()
{
	for (const auto& bidder : this->_bidders)
	{
		bidder->bidChanged(this->_currentBid);
	}
}
