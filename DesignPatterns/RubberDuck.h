#pragma once

#include "Duck.h"

namespace Strategy
{
	class RubberDuck : public Duck
	{
	public:
		RubberDuck();

		void showMe() override;
	};
}
