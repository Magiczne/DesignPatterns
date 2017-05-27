#pragma once

#include "IWarrior.h"

namespace Composite
{
	class Archer : public IWarrior
	{
	public:
		void attack() override;
	};
}
