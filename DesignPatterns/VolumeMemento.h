#pragma once

namespace Memento
{
	class VolumeMemento
	{
	private:
		int _volume;

	public:
		explicit VolumeMemento(int volume);

		int volume() const;
	};
}
