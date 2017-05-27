#pragma once

#include "IShape.h"
#include "Circle.h"

namespace Adapter
{
	class CircleAdapter : public IShape
	{
	private:
		Circle _adaptee;

	public:
		void draw(int x, int y) override;
	};
}
