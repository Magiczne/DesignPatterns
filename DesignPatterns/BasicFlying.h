#pragma once

#include "IFlyingStrategy.h"

namespace Strategy
{
	class BasicFlying : public IFlyingStrategy
	{
	public:
		void fly() override;
	};
}
