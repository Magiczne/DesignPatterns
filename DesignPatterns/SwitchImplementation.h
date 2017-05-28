#pragma once

namespace Bridge
{
	class SwitchImplementation
	{
	public:
		virtual void on();
		virtual void off();

		virtual ~SwitchImplementation() = default;
	};
}