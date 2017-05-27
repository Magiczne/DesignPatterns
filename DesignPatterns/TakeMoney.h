#pragma once

#include "VendingMachineState.h"

namespace State
{
	class TakeMoney : public VendingMachineState
	{
	public:
		void disposeItem(VendingMachine* machine) override;
	};
}