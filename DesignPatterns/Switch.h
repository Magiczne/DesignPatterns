#pragma once

#include "SwitchImplementation.h"

#include <memory>

namespace Bridge
{
	class Switch
	{
	protected:
		std::shared_ptr<SwitchImplementation> _implementation;

	public:
		Switch();

		virtual void on();
		virtual void off();

		virtual ~Switch() = default;
	};
}
