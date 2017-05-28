#pragma once

#include "Switch.h"

namespace Bridge
{
	class AdvancedSwitch : public Switch
	{
	public:
		AdvancedSwitch();

		virtual void flashlight();
	};
}