#pragma once

#include <memory>

namespace AbstractFactory
{
	class IToy;

	class IToyFactory
	{
	public:
		virtual std::shared_ptr<IToy> createToy() = 0;

		virtual ~IToyFactory() = default;
	};
}
