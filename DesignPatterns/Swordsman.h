#pragma once

#include "IWarrior.h"

namespace Composite
{
	class Swordsman : public IWarrior
	{
	public:
		void attack() override;
	};
}
