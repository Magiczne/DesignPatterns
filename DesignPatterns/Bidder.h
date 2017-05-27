#pragma once

namespace Observer
{
	class Bidder
	{
	private:
		int _cash;

	public:
		explicit Bidder(int cash);
		virtual ~Bidder() = default;

		int cash() const;
		void cash(int value);

		virtual void bidChanged(int bid) = 0;
	};
}
