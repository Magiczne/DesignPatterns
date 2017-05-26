#pragma once

#include <vector>

#include "Bidder.h"
#include <memory>

class Auctioneer
{
private:
	std::vector<std::shared_ptr<Bidder>> _bidders;
	int _currentBid = 0;

public:
	void acceptBid(int bid);

	void addBidder(std::shared_ptr<Bidder> bidder);
	void removeBidder(std::shared_ptr<Bidder> bidder);

	void notifyBidders();
};