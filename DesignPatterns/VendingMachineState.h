#pragma once

namespace State
{
	class VendingMachine;

	class VendingMachineState
	{
	public:
		virtual void takeMoney(VendingMachine* machine);
		virtual void disposeItem(VendingMachine* machine);

		virtual ~VendingMachineState() = default;
	};
}
