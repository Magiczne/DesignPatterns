#pragma once

#include <string>

namespace Adapter
{
	class Square
	{
	private:
		std::string _name = "Square";

	public:
		void draw(int x, int y) const;
	};
}
