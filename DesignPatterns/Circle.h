#pragma once

#include <string>

namespace Adapter
{
	class Circle
	{
	private:
		std::string _name = "Circle";

	public:
		void draw(int x, int y) const;
	};
}
