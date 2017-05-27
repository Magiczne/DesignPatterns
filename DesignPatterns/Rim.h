#pragma once

namespace Builder
{
	class Rim
	{
	private:
		int _size;

	public:
		explicit Rim(int size);

		int size() const;
	};
}
