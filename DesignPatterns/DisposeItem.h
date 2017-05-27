#pragma once

#include "VendingMachineState.h"

namespace State
{
	class DisposeItem : public VendingMachineState
	{
	public:
		void takeMoney(VendingMachine* machine) override;
	};
}
