#pragma once

#include "Bidder.h"

namespace Observer
{
	class RichBidder : public Bidder
	{
	public:
		explicit RichBidder(int cash);

		void bidChanged(int bid) override;
	};
}
