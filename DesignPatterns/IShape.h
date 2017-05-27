#pragma once

namespace Adapter
{
	class IShape
	{
	public:
		virtual void draw(int x, int y) = 0;

		virtual ~IShape() = default;
	};
}
