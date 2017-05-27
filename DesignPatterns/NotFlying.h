#pragma once

#include "IFlyingStrategy.h"

namespace Strategy
{
	class NotFlying : public IFlyingStrategy
	{
	public:
		void fly() override;
	};
}
