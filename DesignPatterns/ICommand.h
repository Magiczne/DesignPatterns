#pragma once

namespace Command
{
	class ICommand
	{
	public:
		virtual void execute() = 0;

		virtual ~ICommand() = default;
	};
}