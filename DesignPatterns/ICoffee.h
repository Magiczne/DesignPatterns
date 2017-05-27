#pragma once

namespace Decorator
{
	class ICoffee
	{
	public:
		virtual double cost() = 0;

		virtual ~ICoffee() = default;
	};
}
