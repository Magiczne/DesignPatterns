#pragma once

#include "SwitchImplementation.h"

namespace Bridge
{
	class AdvancedSwitchImplementation : public SwitchImplementation
	{
	public:
		void on() override;

		virtual void flashlight();
	};
}
