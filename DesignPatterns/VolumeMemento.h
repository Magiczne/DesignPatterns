#pragma once

class VolumeMemento
{
private:
	int _volume;

public:
	explicit VolumeMemento(int volume);

	int volume() const;
};