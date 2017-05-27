#pragma once

#include "IWarrior.h"

#include <vector>
#include <memory>

namespace Composite
{
	class Army : public IWarrior
	{
	private:
		std::vector<std::shared_ptr<IWarrior>> _warriors;

	public:
		void call(std::shared_ptr<IWarrior> warrior);
		void release(std::shared_ptr<IWarrior> warrior);

		void attack() override;
	};
}
