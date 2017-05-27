#pragma once

#include <string>

namespace AbstractFactory
{
	class IToy
	{
	public:
		virtual std::string name() = 0;

		virtual ~IToy() = default;
	};
}
