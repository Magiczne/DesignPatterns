#pragma once

#include "Duck.h"

namespace Strategy
{
	class WildDuck : public Duck
	{
	public:
		WildDuck();

		void showMe() override;
	};
}
